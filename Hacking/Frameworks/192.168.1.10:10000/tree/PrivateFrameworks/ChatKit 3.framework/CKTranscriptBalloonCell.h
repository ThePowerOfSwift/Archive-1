/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptBalloonCell : CKTranscriptMessageContentCell {
    CKBalloonView * _balloonView;
    bool  _mayReparentPluginViews;
}

@property (nonatomic, retain) CKBalloonView *balloonView;
@property (nonatomic) bool mayReparentPluginViews;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (id)balloonView;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)mayReparentPluginViews;
- (id)messageDisplayView;
- (void)setBalloonView:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setMayReparentPluginViews:(bool)arg1;
- (void)willLayoutDrawerLabelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;

// Image: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)_accessibilitySupportsActivateAction;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityUserTestingChildren;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityCustomRotors;
- (id)accessibilityLabel;
- (bool)isAccessibilityElement;
- (void)updateCheckmarkImage;

@end
