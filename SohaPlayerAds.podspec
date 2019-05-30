#
# Be sure to run `pod lib lint SohaPlayerAds.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#
e
Pod::Spec.new do |s|
  s.name             = 'SohaPlayerAds'
  s.version          = '0.1.1'
  s.summary          = 'Everything about this project under our ownership'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = "Everything about this project under our ownership, giong cai sumary no chui"

  s.homepage         = 'https://github.com/songoku20/SohaPlayerAds'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = 'MIT'
  s.author           = { 'songoku20' => 'sonleminh@vccorp.vn' }
  # s.source           = { :git => 'https://github.com/songoku20/SohaPlayerAds.git', :tag => s.version.to_s }
  s.source           = { :http => "https://github.com/songoku20/SohaPlayerAds/releases/download/0.1.1/SohaPlayerAds-0.1.1.zip" }

  # s.ios.deployment_target = '8.0'
  s.source_files = 'SohaPlayerAds/Classes/**/*'
  
  s.frameworks          = ["SystemConfiguration", "QuartzCore", "CoreMedia", "AVFoundation", "AudioToolbox", "AdSupport", "ImageIO", "WebKit", "Social", "MediaAccessibility"]
  s.library             = "z", "System", "xml2", "xml2.2", "c++"
  s.requires_arc        = true
  
  s.platform            = :ios, '8.0'
  s.preserve_paths      = 'SohaPlayerAds.framework'
  s.public_header_files = 'SohaPlayerAds.framework/Versions/A/Headers/SHAdManager.h'
  s.source_files        = 'SohaPlayer.framework/Versions/A/Headers/SHAdManager.h'
  s.resource            = 'SohaPlayerAdsResource.bundle'
  s.vendored_frameworks = 'SohaPlayer.framework'
  # s.vendored_library    = 'libstdc++.6.0.9.dylib', 'libstdc++.6.dylib'
end
