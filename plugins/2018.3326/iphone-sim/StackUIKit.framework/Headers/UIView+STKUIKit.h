//
//  UIView+STKUIKit.h
//  StackUIKit
//
//  Created by Ilia Lozhkin on 6/28/19.
//  Copyright © 2019 Stack. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (STKUIKit)

- (UIImage *_Nullable)stk_snapshot;

- (void)stk_alignToTop;

- (void)stk_alignToCenter;

- (void)stk_alignToBottom;

- (void)stk_edgesEqual:(UIView *_Nullable)view;

- (void)stk_edgesEqualSafeArea:(UIView *_Nullable)view;

- (void)stk_centerEqual:(UIView *_Nullable)view;

- (void)stk_topEqual:(UIView *_Nullable)view;

- (void)stk_bottomEqual:(UIView *_Nullable)view;

- (void)stk_edgesEqual:(UIView *_Nullable)view witInset:(UIEdgeInsets)inset;

- (void)stk_edgesEqualSafeArea:(UIView *_Nullable)view witInset:(UIEdgeInsets)inset;

@end

@interface UIView (STKViewability)

- (BOOL)stk_geometryNotNil;

- (NSArray *)stk_allViewsThatHeigherOnScreen;

- (CGFloat)stk_intersectsParentWindowPercentage;

- (BOOL)stk_isVisibleOnScreenWithPercentage:(CGFloat)percentageVisible
                           overlayDetection:(BOOL)overlayDetection
                      weakDeviceSupportMode:(BOOL)weakDeviceSupportMode;

@end

NS_ASSUME_NONNULL_END
