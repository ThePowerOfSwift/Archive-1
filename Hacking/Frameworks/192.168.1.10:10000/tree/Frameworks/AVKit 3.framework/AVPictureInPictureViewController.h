/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController> {
    <AVPictureInPictureViewControllerDelegate> * _delegate;
    struct { 
        bool pictureInPictureViewControllerViewDidAppear; 
        bool pictureInPictureViewControllerViewWillDisappear; 
    }  _delegateRespondsTo;
    AVPlayerController * _playerController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPictureInPictureViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic, readonly) bool shouldShowAlternateActionButtonImage;
@property (nonatomic, readonly) bool shouldShowLoadingIndicator;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)keyPathsForValuesAffectingShouldShowAlternateActionButtonImage;
+ (id)keyPathsForValuesAffectingShouldShowLoadingIndicator;

- (void).cxx_destruct;
- (void)actionButtonTapped;
- (void)dealloc;
- (id)delegate;
- (void)didAnimatePictureInPictureStop;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPictureInPicturePlayerLayerView:(id)arg1;
- (id)pictureInPicturePlayerLayerView;
- (id)playerController;
- (void)setDelegate:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (bool)shouldShowAlternateActionButtonImage;
- (bool)shouldShowLoadingIndicator;
- (void)willAnimatePictureInPictureStart;

// Image: /System/Library/AccessibilityBundles/AVKit.axbundle/AVKit

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;

@end