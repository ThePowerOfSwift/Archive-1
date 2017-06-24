/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLArcView : UIView {
    NLArcMaskLayer * _arcMaskLayer;
    NLArcLayer * _baseRing;
    CALayer * _coloredDotIndicatorLayer;
    CAGradientLayer * _gradientLayer;
    CALayer * _iconLayer;
    double  _indicatorPercentage;
    double  _radius;
    bool  _shouldDrawIndicator;
    bool  _shouldShowIcon;
    CALayer * _whiteDotIndicatorLayer;
}

@property (nonatomic) double arcStart;
@property (nonatomic) double indicatorPercentage;
@property (nonatomic) double lineWidth;
@property (nonatomic) double radius;
@property (nonatomic) bool shouldDrawIndicator;
@property (nonatomic) bool shouldShowIcon;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (void).cxx_destruct;
- (id)_coloredDotIndicatorLayer;
- (void)_positionIndicator;
- (void)_showIndicatorIfNecessary;
- (id)_whiteDotIndicatorLayer;
- (void)animateToCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 lineWidth:(double)arg3 duration:(double)arg4;
- (double)arcStart;
- (double)indicatorPercentage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)lineWidth;
- (double)percentageFull;
- (double)radius;
- (void)setArcStart:(double)arg1;
- (void)setBaseColor:(id)arg1;
- (void)setGradientColors:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIndicatorPercentage:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setPercentageFull:(double)arg1;
- (void)setPercentageFull:(double)arg1 animated:(bool)arg2;
- (void)setPercentageFull:(double)arg1 animatedWithDuration:(double)arg2;
- (void)setPercentageFull:(double)arg1 animatedWithDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)setPercentageUnfull:(double)arg1 animatedWithDuration:(double)arg2;
- (void)setRadius:(double)arg1;
- (void)setRadius:(double)arg1 animated:(bool)arg2;
- (void)setShouldDrawIndicator:(bool)arg1;
- (void)setShouldShowIcon:(bool)arg1;
- (bool)shouldDrawIndicator;
- (bool)shouldShowIcon;

// Image: /System/Library/AccessibilityBundles/FitnessUI.axbundle/FitnessUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end