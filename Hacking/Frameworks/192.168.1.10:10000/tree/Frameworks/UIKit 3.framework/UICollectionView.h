/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionView : UIScrollView <_UIKeyboardAutoRespondingScrollView> {
    NSTimer * _autoscrollTimer;
    UIView * _backgroundView;
    NSMutableDictionary * _cellClassDict;
    NSMutableDictionary * _cellNibDict;
    NSMutableDictionary * _cellNibExternalObjectsTables;
    NSMutableDictionary * _cellReuseQueues;
    NSMutableDictionary * _clonedCellsDict;
    NSMutableDictionary * _clonedDecorationViewsDict;
    NSMutableDictionary * _clonedSupplementaryViewsDict;
    UICollectionViewData * _collectionViewData;
    struct { 
        unsigned int delegateShouldHighlightItemAtIndexPath : 1; 
        unsigned int delegateDidHighlightItemAtIndexPath : 1; 
        unsigned int delegateDidUnhighlightItemAtIndexPath : 1; 
        unsigned int delegateShouldSelectItemAtIndexPath : 1; 
        unsigned int delegateShouldDeselectItemAtIndexPath : 1; 
        unsigned int delegateDidSelectItemAtIndexPath : 1; 
        unsigned int delegateDidDeselectItemAtIndexPath : 1; 
        unsigned int delegateSupportsMenus : 1; 
        unsigned int delegateWillDisplayCell : 1; 
        unsigned int delegateWillDisplaySupplementaryView : 1; 
        unsigned int delegateDidEndDisplayingCell : 1; 
        unsigned int delegateDidEndDisplayingSupplementaryView : 1; 
        unsigned int delegateIndexForReferenceItemDuringLayoutTransition : 1; 
        unsigned int delegateOverrideForTransitionOffsetSize : 1; 
        unsigned int delegateTargetContentOffsetForProposedContentOffsetSPI : 1; 
        unsigned int delegateTargetContentOffsetForProposedContentOffset : 1; 
        unsigned int delegateTargetIndexPathForMoveSPI : 1; 
        unsigned int delegateTargetIndexPathForMove : 1; 
        unsigned int delegateCanFocusItemAtIndexPath_deprecated : 1; 
        unsigned int delegateDidFocusItemAtIndexPath_deprecated : 1; 
        unsigned int delegateCanFocusItemAtIndexPath : 1; 
        unsigned int delegateDidFocusItemAtIndexPath : 1; 
        unsigned int delegateDidUnfocusItemAtIndexPath : 1; 
        unsigned int delegateShouldChangeFocusedItem : 1; 
        unsigned int delegateIndexPathForPreferredFocusedItem : 1; 
        unsigned int delegateShouldUpdateFocusFromRowAtIndexPathToView : 1; 
        unsigned int delegateIndexPathForPreferredFocusedView : 1; 
        unsigned int delegateShouldUpdateFocusInContext : 1; 
        unsigned int delegateDidUpdateFocusInContext : 1; 
        unsigned int delegateTemplateLayoutCell : 1; 
        unsigned int delegateWillLayoutCellUsingTemplateLayoutCell : 1; 
        unsigned int delegateWasNonNil : 1; 
        unsigned int dataSourceNumberOfSections : 1; 
        unsigned int dataSourceViewForSupplementaryElement : 1; 
        unsigned int dataSourceCanMoveItemAtIndexPathSPI : 1; 
        unsigned int dataSourceMoveItemAtIndexPathSPI : 1; 
        unsigned int dataSourceCanMoveItemAtIndexPath : 1; 
        unsigned int dataSourceMoveItemAtIndexPath : 1; 
        unsigned int dataSourceWasNonNil : 1; 
        unsigned int prefetchDataSourcePrefetchItemsAtIndexPaths : 1; 
        unsigned int prefetchDataSourceCancelPrefetchingForItemsAtIndexPaths : 1; 
        unsigned int prefetchDataSourceWasNonNil : 1; 
        unsigned int reloadSkippedDuringSuspension : 1; 
        unsigned int scheduledUpdateVisibleCells : 1; 
        unsigned int scheduledUpdateVisibleCellLayoutAttributes : 1; 
        unsigned int allowsSelection : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int allowsSelectionDuringEditing : 1; 
        unsigned int allowsMultipleSelectionDuringEditing : 1; 
        unsigned int fadeCellsForBoundsChange : 1; 
        unsigned int updatingLayout : 1; 
        unsigned int needsReload : 1; 
        unsigned int reloading : 1; 
        unsigned int skipLayoutDuringSnapshotting : 1; 
        unsigned int layoutInvalidatedSinceLastCellUpdate : 1; 
        unsigned int doneFirstLayout : 1; 
        unsigned int loadingOffscreenViews : 1; 
        unsigned int updating : 1; 
        unsigned int updatingVisibleCells : 1; 
        unsigned int preRotationBoundsSet : 1; 
        unsigned int updateFocusAfterItemAnimations : 1; 
        unsigned int remembersLastFocusedIndexPath : 1; 
        unsigned int updateFocusAfterLoadingCells : 1; 
        unsigned int performingLayout : 1; 
        unsigned int keepsFirstResponderVisibleOnBoundsChange : 1; 
        unsigned int inCreateTemplateCell : 1; 
        unsigned int editing : 1; 
        unsigned int shouldDeriveVisibleBoundsFromContainingScrollView : 1; 
        unsigned int usingCustomLayoutMargins : 1; 
        unsigned int settingDefaultLayoutMargins : 1; 
        unsigned int shouldPrefetchCellsWhenPerformingReloadData : 1; 
        unsigned int scheduledReloadPrefetchDuringNextLayoutPass : 1; 
    }  _collectionViewFlags;
    long long  _containerScrollViewVisitationCount;
    UIFocusContainerGuide * _contentFocusContainerGuide;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentCenterOffset;
    double  _currentInteractiveTransitionProgress;
    double  _currentInteractiveTransitionTimeStamp;
    _UICollectionViewPrefetchingContext * _currentPrefetchingContext;
    UICollectionViewCell * _currentPromiseFulfillmentCell;
    UITouch * _currentTouch;
    UICollectionViewUpdate * _currentUpdate;
    <UICollectionViewDataSource_Private> * _dataSource;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _defaultLayoutMargins;
    NSMutableArray * _deleteItems;
    _UIDynamicAnimationGroup * _endInteractiveTransitionAnimationGroup;
    UIFocusContainerGuide * _endOfContentFocusContainerGuide;
    NSIndexPath * _firstResponderIndexPath;
    UICollectionReusableView * _firstResponderView;
    NSString * _firstResponderViewKind;
    long long  _firstResponderViewType;
    UICollectionReusableView * _focusedCell;
    NSString * _focusedCellElementKind;
    NSIndexPath * _focusedCellIndexPath;
    long long  _focusedViewType;
    NSMutableSet * _indexPathsForHighlightedItems;
    NSMutableSet * _indexPathsForSelectedItems;
    NSMutableArray * _insertItems;
    id /* block */  _interactiveCompletionHandler;
    NSMutableDictionary * _interactiveTransitionInfos;
    NSMutableDictionary * _interactiveTransitionValueTrackingDict;
    NSMutableDictionary * _invalidatedDecorationIndexPaths;
    NSMutableSet * _invalidatedItemIndexPaths;
    NSMutableDictionary * _invalidatedSupplementaryIndexPaths;
    id /* block */  _invalidationBlock;
    bool  _isInInteractiveTransition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLayoutOffset;
    UICollectionViewLayout * _layout;
    NSMutableArray * _moveItems;
    id /* block */  _navigationCompletion;
    UIView * _newContentView;
    UICollectionViewLayout * _nextLayoutForInteractiveTranstion;
    NSArray * _originalDeleteItems;
    NSArray * _originalInsertItems;
    NSMutableSet * _pendingDeselectionIndexPaths;
    NSIndexPath * _pendingSelectionIndexPath;
    id /* block */  _postUpdateBlock;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preRotationBounds;
    NSMutableDictionary * _prefetchCacheItems;
    <UICollectionViewDataSourcePrefetching> * _prefetchDataSource;
    long long  _prefetchMode;
    _UIVelocityIntegrator * _prefetchVelocityIntegrator;
    bool  _prefetchingEnabled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousCenterOffset;
    double  _previousInteractiveTransitionProgress;
    double  _previousInteractiveTransitionTimeStamp;
    NSMutableArray * _reloadItems;
    long long  _reloadingSuspendedCount;
    NSMutableArray * _reorderedItems;
    struct CGPoint { 
        double x; 
        double y; 
    }  _reorderingTargetPosition;
    long long  _rotationAnimationCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rotationBoundsOffset;
    bool  _shouldAccumulateTrackedLayoutValues;
    double  _startTimeStamp;
    NSMutableDictionary * _supplementaryViewClassDict;
    NSMutableDictionary * _supplementaryViewNibDict;
    NSMutableDictionary * _supplementaryViewNibExternalObjectsTables;
    NSMutableSet * _supplementaryViewRegisteredKinds;
    NSMutableDictionary * _supplementaryViewReuseQueues;
    NSMutableDictionary * _templateLayoutCells;
    NSMutableArray * _trackedValuesKeys;
    UICollectionViewLayoutAttributes * _transitionLayoutAttributes;
    long long  _updateAnimationCount;
    id /* block */  _updateCompletionHandler;
    long long  _updateCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
    NSMutableDictionary * _visibleCellsDict;
    NSMutableDictionary * _visibleDecorationViewsDict;
    NSMutableDictionary * _visibleSupplementaryViewsDict;
}

@property (getter=_isEditing, nonatomic, readonly) bool _editing;
@property (getter=_allowsEffectiveMultipleSelection, nonatomic, readonly) bool allowsEffectiveMultipleSelection;
@property (getter=_allowsEffectiveSelection, nonatomic, readonly) bool allowsEffectiveSelection;
@property (nonatomic) bool allowsMultipleSelection;
@property (nonatomic) bool allowsSelection;
@property (nonatomic, retain) UIView *backgroundView;
@property (getter=_collectionViewData, nonatomic, readonly) UICollectionViewData *collectionViewData;
@property (nonatomic, retain) UICollectionViewLayout *collectionViewLayout;
@property (getter=_currentPromiseFulfillmentCell, setter=_setCurrentPromiseFulfillmentCell:, nonatomic, retain) UICollectionViewCell *currentPromiseFulfillmentCell;
@property (getter=_currentTouch, setter=_setCurrentTouch:, nonatomic, retain) UITouch *currentTouch;
@property (getter=_currentUpdate, nonatomic, readonly) UICollectionViewUpdate *currentUpdate;
@property (nonatomic) <UICollectionViewDataSource> *dataSource;
@property (getter=_dataSourceSupportsReordering, nonatomic, readonly) bool dataSourceSupportsReordering;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultLayoutMargins, setter=_setDefaultLayoutMargins:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } defaultLayoutMargins;
@property (nonatomic) <UICollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_endOfContentFocusContainerGuide, nonatomic, readonly) UIFocusContainerGuide *endOfContentFocusContainerGuide;
@property (getter=_focusedCell, setter=_setFocusedCell:, nonatomic, retain) UICollectionReusableView *focusedCell;
@property (getter=_focusedCellElementKind, setter=_setFocusedCellElementKind:, nonatomic, copy) NSString *focusedCellElementKind;
@property (getter=_focusedCellIndexPath, setter=_setFocusedCellIndexPath:, nonatomic, copy) NSIndexPath *focusedCellIndexPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *indexPathsForSelectedItems;
@property (nonatomic, readonly) NSArray *indexPathsForVisibleItems;
@property (getter=_keepsFirstResponderVisibleOnBoundsChange, setter=_setKeepsFirstResponderVisibleOnBoundsChange:, nonatomic) bool keepsFirstResponderVisibleOnBoundsChange;
@property (getter=_navigationCompletion, setter=_setNavigationCompletion:, nonatomic, copy) id /* block */ navigationCompletion;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic) <UICollectionViewDataSourcePrefetching> *prefetchDataSource;
@property (getter=isPrefetchingEnabled, nonatomic) bool prefetchingEnabled;
@property (nonatomic) bool remembersLastFocusedIndexPath;
@property (getter=_reorderedItems, nonatomic, readonly) NSArray *reorderedItems;
@property (getter=_reorderingTargetPosition, nonatomic, readonly) struct CGPoint { double x1; double x2; } reorderingTargetPosition;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *visibleCells;
@property (getter=_visibleViews, nonatomic, readonly) NSArray *visibleViews;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)_addContainerScrollViewForNotifications:(id)arg1;
- (void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2;
- (void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 andSet:(id)arg3;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(bool)arg2 lastAdjustment:(double*)arg3;
- (bool)_allowsEffectiveMultipleSelection;
- (bool)_allowsEffectiveSelection;
- (bool)_allowsMultipleSelectionDuringEditing;
- (bool)_allowsSelectionDuringEditing;
- (void)_applyBlockToAllReusableViews:(id /* block */)arg1;
- (void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2;
- (id)_arrayForUpdateAction:(int)arg1;
- (void)_autoscrollForReordering:(id)arg1;
- (bool)_beginReorderingItemAtIndexPath:(id)arg1;
- (void)_beginUpdates;
- (bool)_canEditItemAtIndexPath:(id)arg1;
- (bool)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (bool)_canReorderItemAtIndexPath:(id)arg1;
- (void)_cancelInteractiveTransitionWithFinalAnimation:(bool)arg1;
- (void)_cancelReordering;
- (void)_cancelTouches;
- (void)_cellBecameFocused:(id)arg1;
- (bool)_cellCanBecomeFocused:(id)arg1;
- (void)_cellDidBecomeFocused:(id)arg1;
- (void)_cellDidBecomeUnfocused:(id)arg1;
- (id)_cellForItemAtIndexPath:(id)arg1 includePrefetchedCells:(bool)arg2;
- (void)_cellMenuDismissed;
- (long long)_cellPrefetchMode;
- (void)_checkForPreferredAttributesInView:(id)arg1 originalAttributes:(id)arg2;
- (id)_childFocusRegionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_cleanUpAfterInteractiveTransitionDidFinish:(bool)arg1;
- (id)_collectionViewData;
- (void)_completeInteractiveMovementWithDisposition:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeFutureVisibleBoundsForPrefetchVelocity:(struct CGVector { double x1; double x2; })arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computePrefetchCacheValidationBoundsForPrefetchVelocity:(struct CGVector { double x1; double x2; })arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_computePrefetchCandidatesForVelocity:(struct CGVector { double x1; double x2; })arg1 notifyDelegateIfNeeded:(bool)arg2;
- (void)_computePrefetchCandidatesForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 futureVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 prefetchVector:(struct CGVector { double x1; double x2; })arg3 notifyDelegateIfNeeded:(bool)arg4;
- (id)_contentFocusContainerGuide;
- (struct CGPoint { double x1; double x2; })_contentOffsetForNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 oldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 newContentSize:(struct CGSize { double x1; double x2; })arg3 andOldContentSize:(struct CGSize { double x1; double x2; })arg4;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(bool)arg3;
- (id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(bool)arg3 isFocused:(bool)arg4 notify:(bool)arg5;
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(bool)arg4;
- (id)_createTemplateLayoutCellForCellsWithIdentifier:(id)arg1;
- (id)_currentPromiseFulfillmentCell;
- (id)_currentTouch;
- (id)_currentUpdate;
- (bool)_dataSourceImplementsNumberOfSections;
- (bool)_dataSourceSupportsReordering;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultLayoutMargins;
- (id)_delegatePreferredIndexPath;
- (struct CGPoint { double x1; double x2; })_delegateTargetOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_deselectAllAnimated:(bool)arg1 notifyDelegate:(bool)arg2;
- (void)_deselectItemAtIndexPath:(id)arg1 animated:(bool)arg2 notifyDelegate:(bool)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didScroll;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(id /* block */)arg6 animationCompletion:(id /* block */)arg7 enableCustomAnimations:(bool)arg8 customAnimationsType:(unsigned long long)arg9;
- (id)_dynamicAnimationsForTrackValues;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(bool)arg2;
- (void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(bool)arg2 animator:(id)arg3;
- (id)_endOfContentFocusContainerGuide;
- (void)_endReordering;
- (void)_endUpdatesWithInvalidationContext:(id)arg1 tentativelyForReordering:(bool)arg2 animator:(id)arg3;
- (void)_ensureViewsAreLoadedInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_finishInteractiveTransitionShouldFinish:(bool)arg1 finalAnimation:(bool)arg2;
- (void)_finishInteractiveTransitionWithFinalAnimation:(bool)arg1;
- (id)_focusedCell;
- (id)_focusedCellElementKind;
- (id)_focusedCellIndexPath;
- (void)_focusedView:(id)arg1 isMinX:(bool*)arg2 isMaxX:(bool*)arg3 isMinY:(bool*)arg4 isMaxY:(bool*)arg5;
- (id)_fulfillPromisedFocusRegionForCell:(id)arg1;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (void)_getOriginalReorderingIndexPaths:(id*)arg1 targetIndexPaths:(id*)arg2;
- (bool)_hasContainerScrollViewsAndScrollingDisabled;
- (bool)_hasFocusedCellForIndexPath:(id)arg1 shouldUsePreUpdateData:(bool)arg2;
- (bool)_hasPrefetchItems;
- (bool)_hasRegisteredClassOrNibForSupplementaryViewOfKind:(id)arg1;
- (void)_highlightFirstVisibleItemIfAppropriate;
- (bool)_highlightItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (bool)_highlightItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(long long)arg3 notifyDelegate:(bool)arg4;
- (id)_indexPathForView:(id)arg1 ofType:(unsigned long long)arg2;
- (bool)_indexPathIsValid:(id)arg1;
- (id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1;
- (id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(bool)arg2;
- (void)_invalidateLayoutIfNecessaryForReload;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateWithBlock:(id /* block */)arg1;
- (bool)_isEditing;
- (bool)_isViewInReuseQueue:(id)arg1;
- (bool)_itemIndexPathIsReordered:(id)arg1;
- (bool)_keepsFirstResponderVisibleOnBoundsChange;
- (id)_keysForObject:(id)arg1 inDictionary:(id)arg2;
- (id)_managedSubviewForView:(id)arg1;
- (id)_managedViews;
- (id /* block */)_navigationCompletion;
- (id)_objectInDictionary:(id)arg1 forKind:(id)arg2 indexPath:(id)arg3;
- (void)_offsetPinnedReorderedItemsWithCurrentContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (void)_performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2 invalidationContext:(id)arg3;
- (void)_performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(bool)arg4;
- (void)_performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(bool)arg4 animator:(id)arg5;
- (void)_performReloadPrefetchIfNeeded;
- (void)_pinReorderedItemsWithPinningTest:(id /* block */)arg1;
- (id)_pivotForTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (id)_preReorderingIndexPathForLayoutIndexPath:(id)arg1;
- (unsigned long long)_prefetchItemsForVelocity:(struct CGVector { double x1; double x2; })arg1 maxItemsToPrefetch:(unsigned long long)arg2;
- (unsigned long long)_prefetchItemsForVelocity:(struct CGVector { double x1; double x2; })arg1 maxItemsToPrefetch:(unsigned long long)arg2 invalidateCandidatesOnDirectionChanges:(bool)arg3;
- (bool)_prefetchingEnabledDefault;
- (void)_prepareLayoutForUpdates;
- (void)_prepareViewForUse:(id)arg1 withElementCategory:(unsigned long long)arg2 elementKind:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5;
- (void)_prepareViewForUse:(id)arg1 withElementCategory:(unsigned long long)arg2 elementKind:(id)arg3 reuseIdentifier:(id)arg4 indexPath:(id)arg5 applyDefaultAttributes:(bool)arg6;
- (void)_pruneCachedPrefetchViewsForCacheValidationBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_pruneCachedPrefetchViewsForVelocity:(struct CGVector { double x1; double x2; })arg1;
- (void)_registerForGeometryChangesIfInSupeview;
- (void)_registeredSupplementaryViewKind:(id)arg1;
- (void)_reloadDataIfNeeded;
- (bool)_remembersPreviouslyFocusedItem;
- (void)_removeAnyAncestorScrollViewNotifications;
- (void)_removeContainerScrollViewForNotifications:(id)arg1;
- (id)_reorderPrefetchCandidates:(id)arg1 forPrefetchVelocity:(struct CGVector { double x1; double x2; })arg2 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_reorderedItemForView:(id)arg1;
- (id)_reorderedItems;
- (struct CGPoint { double x1; double x2; })_reorderingTargetPosition;
- (void)_resetContainerScrollViewVisitationCount;
- (void)_resetCurrentPrefetchContext;
- (void)_resetPrefetchState;
- (void)_resetPrefetchedCachedCells;
- (void)_resumeReloads;
- (void)_reuseCell:(id)arg1 notifyDidEndDisplaying:(bool)arg2;
- (id)_reuseDictionaryForCell:(bool)arg1;
- (void)_reusePreviouslyFocusedManagedSubviewIfNeeded:(id)arg1;
- (id)_reuseQueueForViewWithElementCategory:(unsigned long long)arg1 elementKind:(id)arg2 reuseIdentifier:(id)arg3;
- (void)_scrollFirstResponderCellToVisible:(bool)arg1;
- (void)_scrollViewDidEndDraggingWithDeceleration:(bool)arg1;
- (void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg1 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg2;
- (void)_selectAllSelectedItems;
- (void)_selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(bool)arg4;
- (id)_selectableIndexPathForItemContainingHitView:(id)arg1;
- (void)_setAllowsMultipleSelectionDuringEditing:(bool)arg1;
- (void)_setAllowsSelectionDuringEditing:(bool)arg1;
- (void)_setCellPrefetchMode:(long long)arg1;
- (void)_setCollectionViewLayout:(id)arg1 animated:(bool)arg2 isInteractive:(bool)arg3 completion:(id /* block */)arg4;
- (void)_setCollectionViewLayout:(id)arg1 animated:(bool)arg2 isInteractive:(bool)arg3 completion:(id /* block */)arg4 animator:(id)arg5;
- (void)_setCurrentPromiseFulfillmentCell:(id)arg1;
- (void)_setCurrentTouch:(id)arg1;
- (void)_setDefaultLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfCellWithReuseIdentifier:(id)arg2;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)_setFocusedCell:(id)arg1;
- (void)_setFocusedCellElementKind:(id)arg1;
- (void)_setFocusedCellIndexPath:(id)arg1;
- (void)_setIsAncestorOfFirstResponder:(bool)arg1;
- (void)_setKeepsFirstResponderVisibleOnBoundsChange:(bool)arg1;
- (void)_setNavigationCompletion:(id /* block */)arg1;
- (void)_setNeedsVisibleCellsUpdate:(bool)arg1 withLayoutAttributes:(bool)arg2;
- (void)_setObject:(id)arg1 inDictionary:(id)arg2 forKind:(id)arg3 indexPath:(id)arg4;
- (void)_setRemembersPreviouslyFocusedItem:(bool)arg1;
- (void)_setShouldDeriveVisibleBoundsFromContainingScrollView:(bool)arg1;
- (void)_setShouldPrefetchCellsWhenPerformingReloadData:(bool)arg1;
- (void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2;
- (void)_setupCellAnimations;
- (bool)_shouldDeriveVisibleBoundsFromContainingScrollView;
- (bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (bool)_shouldPrefetchCells;
- (bool)_shouldPrefetchCellsWhenPerformingReloadData;
- (bool)_shouldScrollToContentBeginningInRightToLeft;
- (bool)_shouldShowMenuForCell:(id)arg1;
- (bool)_shouldUpdateFocusInContext:(id)arg1;
- (void)_stopAutoscrollTimer;
- (void)_suspendReloads;
- (id)_templateLayoutCellForCellsWithReuseIdentifier:(id)arg1;
- (void)_trackLayoutValue:(double)arg1 forKey:(id)arg2;
- (double)_trackedLayoutValueForKey:(id)arg1;
- (void)_unhighlightAllItems;
- (void)_unhighlightAllItemsAndHighlightGlobalItem:(long long)arg1;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(bool)arg2;
- (void)_unhighlightItemAtIndexPath:(id)arg1 animated:(bool)arg2 notifyDelegate:(bool)arg3;
- (struct CGVector { double x1; double x2; })_unitVectorForVector:(struct CGVector { double x1; double x2; })arg1;
- (void)_unpinReorderedItemsIfNeeded;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateBackgroundView;
- (void)_updateContainerScrollViewsForNotifications;
- (void)_updateContentFocusContainerGuides;
- (void)_updateDefaultLayoutMargins;
- (void)_updateEditing:(bool)arg1 forView:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateFocusedCellIndexPathIfNecessaryWithLastFocusedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateReorderingTargetPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateReorderingTargetPosition:(struct CGPoint { double x1; double x2; })arg1 forced:(bool)arg2;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2;
- (void)_updateSections:(id)arg1 updateAction:(int)arg2;
- (void)_updateTrackedLayoutValuesWith:(id)arg1;
- (void)_updateTransitionWithProgress:(double)arg1;
- (unsigned long long)_updateVisibleCellsNow:(bool)arg1;
- (void)_updateWithItems:(id)arg1 tentativelyForReordering:(bool)arg2 animator:(id)arg3;
- (void)_userSelectItemAtIndexPath:(id)arg1;
- (id)_viewAnimationsForCurrentUpdate;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (bool)_viewIsReorderedCell:(id)arg1;
- (bool)_visible;
- (id)_visibleCellForIndexPath:(id)arg1;
- (id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleDecorationViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(bool)arg3;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1;
- (id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(bool)arg2;
- (id)_visibleViewDictForElementCategory:(unsigned long long)arg1 elementKind:(id)arg2;
- (id)_visibleViewForLayoutAttributes:(id)arg1;
- (id)_visibleViews;
- (bool)allowsMultipleSelection;
- (bool)allowsSelection;
- (id)backgroundView;
- (bool)beginInteractiveMovementForItemAtIndexPath:(id)arg1;
- (bool)canBeEdited;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (void)cancelInteractiveMovement;
- (void)cancelInteractiveTransition;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)collectionViewLayout;
- (id)dataSource;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)description;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(bool)arg2;
- (void)didMoveToWindow;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endInteractiveMovement;
- (void)finishInteractiveTransition;
- (long long)highlightedGlobalItem;
- (id)indexPathForCell:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)indexPathForSupplementaryView:(id)arg1;
- (id)indexPathsForSelectedItems;
- (id)indexPathsForVisibleItems;
- (id)indexPathsForVisibleSupplementaryElementsOfKind:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isEditing;
- (bool)isPrefetchingEnabled;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)layoutSubviews;
- (long long)maximumGlobalItemIndex;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)performBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performBatchUpdates:(id /* block */)arg1 withAnimator:(id)arg2;
- (id)preferredFocusedItem;
- (void)prefetchCompleteForItemAtIndexPath:(id)arg1;
- (id)prefetchDataSource;
- (id)preparedCells;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (bool)remembersLastFocusedIndexPath;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(bool)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setAllowsSelection:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1 animated:(bool)arg2;
- (void)setCollectionViewLayout:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setCollectionViewLayout:(id)arg1 withAnimator:(id)arg2;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPrefetchDataSource:(id)arg1;
- (void)setPrefetchingEnabled:(bool)arg1;
- (void)setRemembersLastFocusedIndexPath:(bool)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)startInteractiveTransitionToCollectionViewLayout:(id)arg1 completion:(id /* block */)arg2;
- (id)supplementaryViewForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateInteractiveMovementTargetPosition:(struct CGPoint { double x1; double x2; })arg1;
- (id)visibleCells;
- (id)visibleSupplementaryViewsOfKind:(id)arg1;

// Image: /System/Library/AccessibilityBundles/Memories.axbundle/Memories

- (double)_accessibilityScrollWidthDistance;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (bool)isAccessibilityOpaqueElementProvider;

// Image: /System/Library/AccessibilityBundles/NotificationsUI.axbundle/NotificationsUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBounds;

// Image: /System/Library/AccessibilityBundles/PhotosUIFramework.axbundle/PhotosUIFramework

- (bool)_accessibilityOpaqueElementScrollsContentIntoView;
- (void)_axInstallPhotosSectionHeaderView;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;

// Image: /System/Library/AccessibilityBundles/StoreKitUI.axbundle/StoreKitUI

- (unsigned long long)_accessibilityActualCellCount;
- (double)_accessibilityCellWidth;
- (double)_accessibilityLeftOpaqueScrollViewContentOffsetLimit;
- (void)_accessibilityLoadAccessibilityInformation;
- (unsigned long long)_accessibilityModelCellCount;
- (bool)_accessibilityOnlyComparesByXAxis;
- (double)_accessibilityRightOpaqueScrollViewContentOffsetLimit;
- (bool)_accessibilityShouldOverrideScrollViewContentOffsetLimits;
- (id)_accessibilitySortedElementsWithin;
- (bool)_accessibilityUseXRightOffsetForScrollOpaqueElementIntoViewDirection:(int)arg1;
- (bool)_axIsCollectionViewCarousel;

// Image: /System/Library/AccessibilityBundles/Tips.axbundle/Tips

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityFirstVisibleItem;
- (id)_accessibilityScrollStatus;
- (bool)_axIsTipsCollectionView;
- (bool)accessibilityCollectionViewBehavesLikeUIViewAccessibility;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (id)_accessibilityAwayAlertElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityBoundsOfCellsToLoad;
- (bool)_accessibilityDescendantElementAtIndexPathIsValid:(id)arg1;
- (void)_accessibilityEnsureViewsAroundAreLoaded;
- (id)_accessibilityFuzzyHitTest:(struct CGPoint { double x1; double x2; }*)arg1 withEvent:(id)arg2;
- (bool)_accessibilityHasOrderedChildren;
- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityIndexPathOfDirectSubviewForDescendantElement:(id)arg1 withElementKind:(id*)arg2;
- (void)_accessibilityInitializeInternalData:(id)arg1;
- (id)_accessibilityOtherCollectionViewItems;
- (bool)_accessibilityOverridesContainerProtocol;
- (id)_accessibilityReusableViewForOpaqueElement:(id)arg1;
- (id)_accessibilityScannerGroupElements;
- (id)_accessibilityScannerGroupElementsGroupedByRow;
- (bool)_accessibilityShouldDisableCellReuse;
- (bool)_accessibilityShouldUseCollectionViewCellAccessibilityElements;
- (bool)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
- (id)_accessibilitySupplementaryHeaderViewAtIndexPath:(id)arg1;
- (id)_accessibilityUserTestingVisibleCells;
- (long long)_axGlobalRowForIndexPath:(id)arg1;
- (void)_axHandleReusedView:(id)arg1;
- (id)_axIndexPathForGlobalRow:(long long)arg1;
- (id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4;
- (void)_resetAXData;
- (void)_reuseCell:(id)arg1;
- (void)_reuseSupplementaryView:(id)arg1;
- (id)accessibilityCellForRowAtIndexPath:(id)arg1;
- (id)accessibilityCollectionCellElementForIndexPath:(id)arg1;
- (id)accessibilityCreatePrepareCellForIndexPath:(id)arg1;
- (bool)accessibilityShouldSpeakItemReorderEvents;
- (unsigned long long)accessibilityTraits;
- (id)axData;
- (void)dealloc;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadData;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)setAccessibilityShouldBypassColletionViewAccessibility:(bool)arg1;
- (void)setAccessibilityShouldSpeakItemReorderEvents:(bool)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)next:(long long)arg1 indexPathFromIndexPath:(id)arg2;
- (void)pu_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(bool)arg3;
- (void)pu_scrollToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atScrollPosition:(unsigned long long)arg2 animated:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (struct CGSize { double x1; double x2; })__ck_contentSize;
- (id)__ck_indexPathForLastItem;
- (id)__ck_indexPathForReplyItem;
- (bool)__ck_isScrolledToBottomHidingIndexPath:(id)arg1;
- (void)__ck_reloadDataKeepingSelection;
- (struct CGPoint { double x1; double x2; })__ck_scrollToBottomContentOffsetHidingIndexPath:(id)arg1;
- (void)__ck_scrollToTopOfCellAtIndexPath:(id)arg1 hidingCellAtIndexPath:(id)arg2 animated:(bool)arg3;
- (id)ckIndexPathsForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (void)music_inheritedLayoutInsetsDidChange;

// Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI

- (id)_gkDequeueCellForClass:(Class)arg1 forIndexPath:(id)arg2;
- (id)_gkDequeueSupplementaryViewForClass:(Class)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)_gkPerformWithoutViewReuse:(id /* block */)arg1;
- (void)_gkRegisterCellClass:(Class)arg1;
- (void)_gkRegisterClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2;
- (void)_gkRegisterNib:(id)arg1 forCellClass:(Class)arg2;
- (id)_gkReuseIdentifierForClass:(Class)arg1;
- (id)_gkVisibleCellForIndexPath:(id)arg1;

@end
