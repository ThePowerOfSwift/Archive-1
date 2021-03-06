/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CUShutterButton : UIButton {
    UIView * __innerView;
    UIImageView * __outerImageView;
    CAMShutterButtonRingView * __outerView;
    UIActivityIndicatorView * __progressActivityIndicatorView;
    CAMTimelapseShutterRingView * __timelapseOuterView;
    long long  _layoutStyle;
    long long  _mode;
    bool  _pulsing;
    bool  _showDisabled;
    struct CAMShutterButtonSpec { 
        double outerRingDiameter; 
        double outerRingStrokeWidth; 
        double stopSquareSideLength; 
        double stopSquareCornerRadius; 
        double interRingSpacing; 
    }  _spec;
    bool  _spinning;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (nonatomic, readonly) UIView *_innerView;
@property (nonatomic, readonly) UIImageView *_outerImageView;
@property (nonatomic, readonly) CAMShutterButtonRingView *_outerView;
@property (nonatomic, readonly) UIActivityIndicatorView *_progressActivityIndicatorView;
@property (nonatomic, readonly) CAMTimelapseShutterRingView *_timelapseOuterView;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long mode;
@property (getter=isPulsing, nonatomic) bool pulsing;
@property (nonatomic) bool showDisabled;
@property (nonatomic) struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; } spec;
@property (getter=isSpinning, nonatomic) bool spinning;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

+ (id)shutterButtonWithLayoutStyle:(long long)arg1;
+ (id)shutterButtonWithSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })arg1 layoutStyle:(long long)arg2;
+ (id)smallShutterButtonWithLayoutStyle:(long long)arg1;
+ (id)tinyShutterButtonWithLayoutStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_colorForMode:(long long)arg1;
- (void)_commonCAMShutterButtonInitializationWithLayoutStyle:(long long)arg1;
- (double)_cornerRadiusForMode:(long long)arg1;
- (double)_innerCircleDiameter;
- (id)_innerView;
- (bool)_isStopMode:(long long)arg1;
- (id)_outerImageForMode:(long long)arg1;
- (id)_outerImageView;
- (id)_outerView;
- (void)_performHighlightAnimation;
- (void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(bool)arg3;
- (id)_progressActivityIndicatorView;
- (bool)_shouldShowContrastBorderForMode:(long long)arg1 layoutStyle:(long long)arg2;
- (bool)_shouldUseImageViewForMode:(long long)arg1;
- (bool)_shouldUseTimelapseOuterViewForMode:(long long)arg1;
- (struct CGSize { double x1; double x2; })_sizeForMode:(long long)arg1;
- (struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })_specForLayoutStyle:(long long)arg1;
- (id)_timelapseOuterView;
- (void)_updateOuterAndInnerLayers;
- (void)_updateSpinningAnimations;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutStyle:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPulsing;
- (bool)isSpinning;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (long long)mode;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setMode:(long long)arg1;
- (void)setMode:(long long)arg1 animated:(bool)arg2;
- (void)setPulsing:(bool)arg1;
- (void)setShowDisabled:(bool)arg1;
- (void)setSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })arg1;
- (void)setSpinning:(bool)arg1;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)showDisabled;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; double x5; })spec;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;

// Image: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI

+ (Class)safeCategoryBaseClass;

- (bool)accessibilityActivate;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end
