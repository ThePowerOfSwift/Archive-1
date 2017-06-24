/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUScrubberView : UIView <PUBrowsingViewModelChangeObserver, PUPlaybackTimeIndicatorTileViewControllerDelegate, PUScrubberTilingLayoutDelegate, PUTilingViewScrollDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUVideoScrubberControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    double  __decelerationDistance;
    NSIndexPath * __decelerationTargetIndexPath;
    struct CGPoint { 
        double x; 
        double y; 
    }  __decelerationTargetOffset;
    bool  __isHandlingScrollViewWillEndDragging;
    bool  __isHandlingUserScroll;
    bool  __isScrubbingAwayFromContentEdge;
    long long  __layoutTransitionsDisabledCount;
    bool  __scrollViewSettled;
    PUScrubberTilingLayout * __scrubberLayout;
    double  __scrubbingTransitionProgress;
    bool  __snapToExpandedItem;
    UITapGestureRecognizer * __tapGestureRecognizer;
    bool  __thinLoupe;
    PUTilingView * __tilingView;
    bool  __useLoupe;
    bool  __useSmoothingTransitionCoordinator;
    PUVideoScrubberController * __videoScrubberController;
    NSMutableDictionary * _aspectRatioByIndexPath;
    PUBrowsingSession * _browsingSession;
    NSString * _contentScrubbingIdentifier;
    <PUScrubberViewDelegate> * _delegate;
    struct { 
        bool respondsToShouldIgnoreHitTestWithEvent; 
    }  _delegateFlags;
    bool  _isForPreview;
    bool  _loupeEffectIsValid;
    bool  _scrubberLayoutIsValid;
    bool  _scrubberLayoutNeedsTransition;
    NSString * _scrubbingIdentifier;
    bool  _snapToExpandedIsValid;
    PUTouchingGestureRecognizer * _touchingGestureRecognizer;
    NSString * _transitionLayoutIdentifier;
    long long  _type;
}

@property (setter=_setDecelerationDistance:, nonatomic) double _decelerationDistance;
@property (setter=_setDecelerationTargetIndexPath:, nonatomic, retain) NSIndexPath *_decelerationTargetIndexPath;
@property (setter=_setDecelerationTargetOffset:, nonatomic) struct CGPoint { double x1; double x2; } _decelerationTargetOffset;
@property (setter=_setHandlingScrollViewWillEndDragging:, nonatomic) bool _isHandlingScrollViewWillEndDragging;
@property (setter=_setIsHandlingUserScroll:, nonatomic) bool _isHandlingUserScroll;
@property (setter=_setScrubbingAwayFromContentEdge:, nonatomic) bool _isScrubbingAwayFromContentEdge;
@property (setter=_setLayoutTransitionsDisabledCount:, nonatomic) long long _layoutTransitionsDisabledCount;
@property (setter=_setScrollViewSettled:, nonatomic) bool _scrollViewSettled;
@property (setter=_setScrubberLayout:, nonatomic, retain) PUScrubberTilingLayout *_scrubberLayout;
@property (setter=_setScrubbingTransitionProgress:, nonatomic) double _scrubbingTransitionProgress;
@property (setter=_setSnapToExpandedItem:, nonatomic) bool _snapToExpandedItem;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (setter=_setThinLoupe:, nonatomic) bool _thinLoupe;
@property (setter=_setTilingView:, nonatomic, retain) PUTilingView *_tilingView;
@property (setter=_setUseLoupe:, nonatomic) bool _useLoupe;
@property (setter=_setUseSmoothingTransitionCoordinator:, nonatomic) bool _useSmoothingTransitionCoordinator;
@property (setter=_setVideoScrubberController:, nonatomic, retain) PUVideoScrubberController *_videoScrubberController;
@property (nonatomic, retain) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUScrubberViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForPreview;
@property (nonatomic, readonly) UIScrollView *scrollViewForPreviewing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double topOutset;
@property (nonatomic) long long type;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void).cxx_destruct;
- (bool)_allowExitFromContentScrubbing;
- (bool)_areLayoutTransitionsDisabled;
- (id)_currentAssetsDataSource;
- (double)_decelerationDistance;
- (id)_decelerationTargetIndexPath;
- (struct CGPoint { double x1; double x2; })_decelerationTargetOffset;
- (void)_disableLayoutTransitionsForDuration:(double)arg1;
- (void)_endScrubbing;
- (id)_expandedAssetReference;
- (double)_expandedItemWidth;
- (void)_handleTap:(id)arg1;
- (void)_handleUserScrollWillBegin:(bool)arg1;
- (void)_invalidateLoupeEffect;
- (void)_invalidateScrubberLayout;
- (void)_invalidateScrubberLayoutEnsureTransition;
- (void)_invalidateSnapToExpandedItem;
- (bool)_isContentScrubbing;
- (bool)_isDrivingPlayheadProgress;
- (bool)_isHandlingScrollViewWillEndDragging;
- (bool)_isHandlingUserScroll;
- (bool)_isLibraryScrubbing;
- (bool)_isScrubbingAwayFromContentEdge;
- (long long)_layoutTransitionsDisabledCount;
- (double)_lengthForDuration:(double)arg1;
- (id)_newScrubberLayout;
- (void)_reenableLayoutTransitions;
- (bool)_scrollViewSettled;
- (id)_scrubberLayout;
- (double)_scrubbingTransitionProgress;
- (void)_setDecelerationDistance:(double)arg1;
- (void)_setDecelerationTargetIndexPath:(id)arg1;
- (void)_setDecelerationTargetOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setHandlingScrollViewWillEndDragging:(bool)arg1;
- (void)_setIsHandlingUserScroll:(bool)arg1;
- (void)_setLayoutTransitionsDisabledCount:(long long)arg1;
- (void)_setNeedsUpdate;
- (void)_setScrollViewSettled:(bool)arg1;
- (void)_setScrubberLayout:(id)arg1;
- (void)_setScrubbingAwayFromContentEdge:(bool)arg1;
- (void)_setScrubbingTransitionProgress:(double)arg1;
- (void)_setSnapToExpandedItem:(bool)arg1;
- (void)_setThinLoupe:(bool)arg1;
- (void)_setTilingView:(id)arg1;
- (void)_setUseLoupe:(bool)arg1;
- (void)_setUseSmoothingTransitionCoordinator:(bool)arg1;
- (void)_setVideoScrubberController:(id)arg1;
- (bool)_snapToExpandedItem;
- (id)_tapGestureRecognizer;
- (bool)_thinLoupe;
- (id)_tilingView;
- (void)_updateLoupeEffectIfNeeded;
- (void)_updateScrollPositionAnimated:(bool)arg1;
- (void)_updateScrubberLayoutIfNeeded;
- (void)_updateScrubbingAwayFromContentEdgeBeganDragging:(bool)arg1;
- (void)_updateSnapToExpandedItemIfNeeded;
- (void)_updateTilingViewIfNeeded;
- (bool)_useLoupe;
- (bool)_useSmoothingTransitionCoordinator;
- (id)_videoScrubberController;
- (void)beginPreviewing;
- (id)browsingSession;
- (void)dealloc;
- (id)delegate;
- (void)endPreviewing;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleTouchGesture:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isForPreview;
- (float)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (bool)playbackTimeIndicatorTileViewControllerCanFlashIndicator:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrollViewForPreviewing;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setBrowsingSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsForPreview:(bool)arg1;
- (void)setType:(long long)arg1;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (struct CGPoint { double x1; double x2; })tilingView:(id)arg1 initialVisibleOriginWithLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingView:(id)arg1 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg2 withLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (double)topOutset;
- (long long)type;
- (void)updateIfNeeded;
- (void)videoScrubberController:(id)arg1 desiredSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (double)videoScrubberController:(id)arg1 lengthForDuration:(double)arg2;
- (void)videoScrubberControllerDidUpdate:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

// Image: /System/Library/AccessibilityBundles/PhotosUIFramework.axbundle/PhotosUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_axCloseVideoPlaybackAction;
- (bool)_axIsVideoPlayerActivated;
- (void)_axScrollToAssetReference:(id)arg1 inViewModel:(id)arg2;
- (id)_axShowingType;
- (id)_axTileControllerForAsset:(id)arg1;
- (id)_axVideoPlaybackValue;
- (id)_axVideoPlayer;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end