//
//  AMKAd.h
//
//  Copyright © 2019 Appodeal. All rights reserved.
//

#import <StackRendering/STKMRAIDWebConfiguration.h>
#import <StackRendering/STKMRAIDService.h>
#import <StackRendering/STKMRAIDMeasure.h>
#import <StackProductPresentation/StackProductPresentation-Swift.h>


@class STKMRAIDAd;

NS_ASSUME_NONNULL_BEGIN

/// MRAID Ad delegate
@protocol STKMRAIDAdDelegate <NSObject>
/// Method called when ad did load
/// @param ad Ready to present ad
- (void)didLoadAd:(STKMRAIDAd *)ad;
/// Method called when ad did fail to load
/// @param ad Failed ad
/// @param error Error description
- (void)didFailToLoadAd:(STKMRAIDAd *)ad withError:(NSError *)error;
/// Method called when user interact with ad
/// @param ad Ad which was clicked by user
/// @param URL Destination
- (BOOL)ad:(STKMRAIDAd *)ad shouldProcessNavigationWithURL:(NSURL *)URL;
@end


/// MRAID Ad interface for loading creatives
@interface STKMRAIDAd : NSObject
/// Delegate
@property (nonatomic, weak) id<STKMRAIDAdDelegate> delegate;
/// WebView reference
@property (nonatomic, strong, readonly, nullable) WKWebView *webView;
/// Web configuration
@property (nonatomic, copy, readonly) STKMRAIDWebConfiguration *configuration;
/// Service reference
@property (nonatomic, strong, readonly) STKMRAIDService *service;
/// Open Measure
@property (nonatomic, strong, readonly) STKMRAIDMeasure *measure;
/// Advertised product
@property (nonatomic, strong, readonly) STKProduct *advertisedProduct;
/// Append configuration
@property (nonatomic, readonly) void(^appendConfiguration)(STKMRAIDWebConfiguration *);
/// Append advertisied product store parameters
@property (nonatomic, readonly) void(^appendProductParameters)(NSDictionary<NSString *, id> *);
/// Method to load HTML
/// @param HTML Raw HTML string
- (void)loadHTML:(NSString *)HTML;
/// Method to load HTML from URL
/// @param URL Remote or local URL
- (void)loadFromURL:(NSURL *)URL;
@end

NS_ASSUME_NONNULL_END
