//
//  SHAdManager.h
//  SohaPlayerAds
//
//  Created by Build Server on 5/24/19.
//  Copyright © 2019 SohaPlayer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define    CREATIVEVIEW                   @"creativeView"
#define    STARTED                   @"start"
#define    MIDPOINT                   @"midpoint"
#define    FIRSTQUARTILE                   @"firstQuartile"
#define    THIRDQUARTILE                   @"thirdQuartile"
#define    COMPLETE                   @"complete"
#define    MUTE                   @"mute"
#define    UNMUTE                   @"unmute"
#define    PAUSE                   @"pause"
#define    RESUME                   @"resume"
#define    REWIND                   @"rewind"
#define    FULLSCREEN                   @"fullscreen"
#define    EXPAND                   @"expand"
#define    COLLAPSE                   @"collapse"
#define    ACCEPTINVITATION                   @"acceptInvitation"
#define    CLOSE                   @"close"
#define    GOTADS                   @"gotAds"
#define    LOADERROR                   @"loadError"
#define    ALLADSCOMPLETED                   @"alladscompleted"
#define    NOADSTOSHOW                   @"noAdsToShow"
#define    PLAYERROR                   @"playError"
#define    CLICKED                   @"clicked"
#define    CUEPOINTSCHANGED                   @"cuepointschanged"
#define    CONTENTPAUSEREQUESTED                   @"contentpauserequested"
#define    CONTENTRESUMEREQUESTED                   @"contentresumerequested"
#define    LOG                         @"log"
#define    ADBREAKREADY                   @"adbreakready"
#define    SKIPPABLESTATECHANGED                   @"skippablestatechanged"
#define    SKIPPED                   @"skipped"
#define    TAPPED                   @"tapped"
#define    ICONTAPPED                   @"icontapped"
#define    LOADED                   @"loaded"
#define    ADPROGRESS                   @"adprogress"
#define    ADBUFFERING                   @"adbuffering"
#define    ADBREAKSTARTED                   @"adbreakstarted"
#define    ADBREAKENDED                   @"adbreakended"
#define    ADPERIODSTARTED                   @"adperiodstarted"
#define    ADPERIODENDED                   @"adperiodended"
#define    LINKREQUESTEMPTY                  @"linkRequestEmpty"



@protocol SHAdEventDelegate <NSObject>

-(void) onAdsEventListener:(NSString*)event ads:(NSDictionary*_Nullable)ads;

-(void) onAdsProgressListener:(float)mediaTime totalTime:(float)totalTime;

@end

@protocol SHPlayerContentDelegate <NSObject>

-(UIView*)getAdViewContainer;

-(float)getVideoDurationPlayer;

-(float) getCurrentPlaybackTimePlayer;

-(void) pauseVideo;

-(void)resumeVideo;

/**
 * Seek video to current time as second
 *
 * @param currentTime time video playing at second
 */
-(void) seekTo:(float)currentTime;

-(BOOL)isPlaying;

-(NSString*)currentUrlContentPlayer;


@end

@interface SHAdManager : NSObject

@property(nonatomic, setter=setPlayAdMultiWhenComplete:) BOOL playMultiAds;
@property(nonatomic, setter=setSkipAllAdsWhenPress:) BOOL skipAllAds;
@property(nonatomic,weak, setter=setSHAdEventDelegate:) id<SHAdEventDelegate> shAdEventDelegate;
@property (nonatomic, getter=getCurrentAdsId, readonly) NSString *crrAdId;

- (instancetype)init:(id<SHPlayerContentDelegate>)playerContentDelegate;

-(void)requestAds:(NSString*)urlStr;

-(void)requestAds:(NSString*)urlStr reset:(BOOL)reset;

-(void) resumeAds;

-(void) pauseAds;

-(void) muteAds:(BOOL)muted;

-(void) skipAds;

-(void) releaseAds;

-(BOOL) isPlayingAds;

-(NSArray*) getMarkerShowAds;

-(NSArray*) getMarkerShowed;

-(float) getDurationAds;

-(float) getCurrentTimeAds;

-(float) getVolumeAds;

@end

NS_ASSUME_NONNULL_END
