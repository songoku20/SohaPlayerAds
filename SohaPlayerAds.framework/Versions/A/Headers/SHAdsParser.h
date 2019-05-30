//
//  SHAdsParser.h
//  SohaPlayerAds
//
//  Created by Build Server on 5/24/19.
//  Copyright © 2019 SohaPlayer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SHXMLParser.h"

NS_ASSUME_NONNULL_BEGIN


@interface SHAdsParser : SHXMLParser

@property (nonatomic, copy, readonly) NSMutableDictionary *allListAd;
@property (nonatomic, copy, readonly) NSString *vastSkipOffset;
@property (nonatomic, copy, readonly) NSMutableDictionary *vastTracking;
@property (nonatomic, copy, readonly) NSArray *vastMediaFiles;
@property (nonatomic, copy, readonly) NSString *vastDuration;
@property (nonatomic, copy, readonly) NSString *vastVideoClickThrough;
@property (nonatomic, copy, readonly) NSString *vastWrapperAdTagURI;
@property (nonatomic, copy, readonly) NSMutableArray *timeOffsetRequestedVmap;
@property (nonatomic, copy, readonly) NSString *vastAdTitle;
@property (nonatomic, copy, readonly) NSString *crrAdId;

-(void)resetAllParam;

-(void)resetParam;

-(void)retrieveAds:(NSDictionary*)dict;

-(BOOL)parsingAds:(NSDictionary*)dict type:(NSString*)type currentPosAds:(int)crrPosAds currentTimeCheck:(NSString*)currentTimeCheck;

+(NSDictionary*) selectViewForAds:(NSInteger) screenWidth screenHeight:(NSInteger) screenHeight listMediaFile:(NSArray*) listSizeSupport;
@end

NS_ASSUME_NONNULL_END
