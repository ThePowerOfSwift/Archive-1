/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayView : UIView <EKDayAllDayViewDelegate, EKDayTimeViewDelegate, EKDayViewContentDelegate, UIScrollViewDelegate> {
    double  _additionalLeftPadding;
    bool  _alignsMidnightToTop;
    EKDayAllDayView * _allDayView;
    bool  _allowPinchingHourHeights;
    bool  _allowsOccurrenceSelection;
    double  _bottomContentInset;
    UIView * _bottomLine;
    UIImageView * _bottomVerticalGridExtension;
    NSCalendar * _calendar;
    <EKDayViewDataSource> * _dataSource;
    EKDayViewContent * _dayContent;
    double  _dayEnd;
    double  _dayStart;
    <EKDayViewDelegate> * _delegate;
    NSDateComponents * _displayDate;
    UITapGestureRecognizer * _doubleTapGestureRecognizer;
    NSArray * _existingTimedOcurrences;
    double  _hourScale;
    bool  _isNowVisible;
    NSDate * _lastInspectedOccurrenceOnDate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPinchDistance;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPinchPoint1;
    double  _nextDSTTransition;
    long long  _orientation;
    int  _outlineStyle;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    bool  _pinching;
    double  _scrollAnimationDurationOverride;
    bool  _scrollEventsInToViewIgnoresVisibility;
    bool  _scrollToOccurrencesOnNextReload;
    bool  _scrollbarShowsInside;
    struct CGSize { 
        double width; 
        double height; 
    }  _scrolledToFirstVisibleSecondForSize;
    UIScrollView * _scroller;
    bool  _scrollingToOccurrence;
    bool  _settingDate;
    bool  _shouldEverShowTimeIndicators;
    bool  _sizeTimeViewUsingOnlyHourText;
    NSTimer * _timeMarkerTimer;
    EKDayTimeView * _timeView;
    double  _todayScrollSecondBuffer;
    double  _topContentInset;
    UIImageView * _topVerticalGridExtension;
    bool  _userScrolling;
    bool  _usesVibrantGridDrawing;
    double  _verticalContentInset;
}

@property (nonatomic) double additionalLeftPadding;
@property (nonatomic) bool alignsMidnightToTop;
@property (nonatomic, readonly) EKDayAllDayView *allDayView;
@property (nonatomic, readonly) NSArray *allOccurrenceViews;
@property (nonatomic) bool allowPinchingHourHeights;
@property (nonatomic) bool allowsOccurrenceSelection;
@property (nonatomic) bool allowsScrolling;
@property (nonatomic) bool animatesTimeMarker;
@property (nonatomic) double bottomContentInset;
@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic) <EKDayViewDataSource> *dataSource;
@property (nonatomic, readonly) EKDayViewContent *dayContent;
@property (nonatomic, readonly) double dayEnd;
@property (nonatomic, readonly) double dayStart;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKDayViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEvent *dimmedOccurrence;
@property (nonatomic, copy) NSDateComponents *displayDate;
@property (nonatomic) bool eventsFillGrid;
@property (nonatomic) int firstVisibleSecond;
@property (nonatomic, retain) UIColor *gridLineColor;
@property (nonatomic, retain) UIVisualEffect *gridVisualEffect;
@property (readonly) unsigned long long hash;
@property (nonatomic) double hourScale;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } hoursToRender;
@property (nonatomic) bool isNowVisible;
@property (nonatomic, readonly) double leftContentInset;
@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedContentOffset;
@property (nonatomic) int occurrenceBackgroundStyle;
@property (nonatomic, retain) UIColor *occurrenceLocationColor;
@property (nonatomic, retain) UIColor *occurrenceTextBackgroundColor;
@property (nonatomic, retain) UIColor *occurrenceTimeColor;
@property (nonatomic, retain) UIColor *occurrenceTitleColor;
@property (nonatomic, readonly) NSArray *occurrenceViews;
@property (nonatomic) int outlineStyle;
@property (nonatomic) double scrollAnimationDurationOverride;
@property (nonatomic, readonly) double scrollBarOffset;
@property (nonatomic) bool scrollEventsInToViewIgnoresVisibility;
@property (nonatomic, readonly) double scrollOffset;
@property (nonatomic) bool shouldEverShowTimeIndicators;
@property (nonatomic) bool showsLeftBorder;
@property (nonatomic) bool showsTimeLabel;
@property (nonatomic) bool showsTimeLine;
@property (nonatomic) bool showsTimeMarker;
@property (nonatomic) bool sizeTimeViewUsingOnlyHourText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EKDayTimeView *timeView;
@property (nonatomic, retain) UIColor *timeViewTextColor;
@property (nonatomic, retain) UIVisualEffect *timeViewVisualEffect;
@property (nonatomic) double todayScrollSecondBuffer;
@property (nonatomic) double topContentInset;
@property (nonatomic) bool usesVibrantGridDrawing;
@property (nonatomic) double verticalContentInset;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (void).cxx_destruct;
- (void)_adjustForDateOrCalendarChange;
- (double)_adjustSecondBackwardForDSTHole:(double)arg1;
- (double)_adjustSecondForwardForDSTHole:(double)arg1;
- (void)_clearVerticalGridExtensionImageCache;
- (void)_createAllDayView;
- (void)_dayViewPinched:(id)arg1;
- (void)_disposeAllDayView;
- (void)_doubleTap:(id)arg1;
- (id)_generateVerticalGridExtensionImage;
- (void)_invalidateMarkerTimer;
- (bool)_isTimeMarkerFullyUnobstructed;
- (void)_localeChanged;
- (void)_notifyDelegateOfFinishedScrollingToOccurrence;
- (struct CGPoint { double x1; double x2; })_pinchDistanceForGestureRecognizer:(id)arg1;
- (double)_positionOfSecond:(int)arg1;
- (void)_scrollToSecond:(int)arg1 animated:(bool)arg2 whenFinished:(id /* block */)arg3;
- (void)_scrollToSecond:(int)arg1 offset:(double)arg2 animated:(bool)arg3 whenFinished:(id /* block */)arg4;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scrollerRect;
- (int)_secondAtPosition:(double)arg1;
- (bool)_showingAllDaySection;
- (void)_startMarkerTimer;
- (void)_timeViewTapped:(id)arg1;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (double)_verticalOffset;
- (void)addViewToScroller:(id)arg1 isAllDay:(bool)arg2;
- (double)additionalLeftPadding;
- (void)adjustForSignificantTimeChange;
- (void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1;
- (bool)alignsMidnightToTop;
- (double)allDayRegionHeight;
- (id)allDayView;
- (void)allDayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)allDayViewDidLayoutSubviews:(id)arg1;
- (id)allOccurrenceViews;
- (bool)allowPinchingHourHeights;
- (bool)allowsOccurrenceSelection;
- (bool)allowsScrolling;
- (bool)animatesTimeMarker;
- (double)bottomContentInset;
- (void)bringEventToFront:(id)arg1;
- (id)calendar;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (bool)containsOccurrences;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentTimeRectInView:(id)arg1;
- (id)dataSource;
- (double)dateAtPoint:(struct CGPoint { double x1; double x2; })arg1 isAllDay:(bool*)arg2;
- (double)dateAtPoint:(struct CGPoint { double x1; double x2; })arg1 isAllDay:(bool*)arg2 requireAllDayRegionInsistence:(bool)arg3;
- (void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;
- (id)dayContent;
- (void)dayContentView:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (double)dayEnd;
- (double)dayStart;
- (void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;
- (void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dimmedOccurrence;
- (id)displayDate;
- (bool)eventOccursOnThisDay:(id)arg1;
- (bool)eventsFillGrid;
- (int)firstVisibleSecond;
- (void)firstVisibleSecondChanged;
- (id)gridLineColor;
- (id)gridVisualEffect;
- (void)highlightHour:(double)arg1;
- (double)highlightedHour;
- (double)hourScale;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hoursToRender;
- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;
- (bool)isAllDayLabelHighlighted;
- (bool)isNowVisible;
- (void)layoutSubviews;
- (double)leftContentInset;
- (double)maximumHourScale;
- (double)minimumHourScale;
- (struct CGPoint { double x1; double x2; })normalizedContentOffset;
- (int)occurrenceBackgroundStyle;
- (id)occurrenceLocationColor;
- (void)occurrencePressed:(id)arg1 onDay:(double)arg2;
- (id)occurrenceTextBackgroundColor;
- (id)occurrenceTimeColor;
- (id)occurrenceTitleColor;
- (id)occurrenceViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViews;
- (int)outlineStyle;
- (struct CGPoint { double x1; double x2; })pointAtDate:(double)arg1 isAllDay:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForEvent:(id)arg1;
- (void)relayoutExistingTimedOccurrences;
- (void)reloadData;
- (void)removeFromSuperview;
- (void)resetLastSelectedOccurrencePoint;
- (double)scaledHourHeight;
- (double)scrollAnimationDurationOverride;
- (double)scrollBarOffset;
- (bool)scrollEventsInToViewIgnoresVisibility;
- (void)scrollEventsIntoViewAnimated:(bool)arg1;
- (double)scrollOffset;
- (void)scrollToDate:(id)arg1 animated:(bool)arg2 whenFinished:(id /* block */)arg3;
- (void)scrollToDate:(id)arg1 offset:(double)arg2 animated:(bool)arg3 whenFinished:(id /* block */)arg4;
- (void)scrollToEvent:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)scrollToNowAnimated:(bool)arg1 whenFinished:(id /* block */)arg2;
- (bool)scrollTowardPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)setAdditionalLeftPadding:(double)arg1;
- (void)setAlignsMidnightToTop:(bool)arg1;
- (void)setAllDayLabelHighlighted:(bool)arg1;
- (void)setAllowPinchingHourHeights:(bool)arg1;
- (void)setAllowsOccurrenceSelection:(bool)arg1;
- (void)setAllowsScrolling:(bool)arg1;
- (void)setAnimatesTimeMarker:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBottomContentInset:(double)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setEventsFillGrid:(bool)arg1;
- (void)setFirstVisibleSecond:(int)arg1;
- (void)setGridLineColor:(id)arg1;
- (void)setGridVisualEffect:(id)arg1;
- (void)setHourScale:(double)arg1;
- (void)setHoursToRender:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setIsNowVisible:(bool)arg1;
- (void)setNormalizedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setOccurrenceLocationColor:(id)arg1;
- (void)setOccurrenceTextBackgroundColor:(id)arg1;
- (void)setOccurrenceTimeColor:(id)arg1;
- (void)setOccurrenceTitleColor:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOutlineStyle:(int)arg1;
- (void)setScrollAnimationDurationOverride:(double)arg1;
- (void)setScrollEventsInToViewIgnoresVisibility:(bool)arg1;
- (void)setScrollerYInset:(double)arg1 keepingYPointVisible:(double)arg2;
- (void)setShouldEverShowTimeIndicators:(bool)arg1;
- (void)setShowsLeftBorder:(bool)arg1;
- (void)setShowsTimeLabel:(bool)arg1;
- (void)setShowsTimeLine:(bool)arg1;
- (void)setShowsTimeMarker:(bool)arg1;
- (void)setSizeTimeViewUsingOnlyHourText:(bool)arg1;
- (void)setTimeViewTextColor:(id)arg1;
- (void)setTimeViewVisualEffect:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTodayScrollSecondBuffer:(double)arg1;
- (void)setTopContentInset:(double)arg1;
- (void)setUsesVibrantGridDrawing:(bool)arg1;
- (void)setVerticalContentInset:(double)arg1;
- (bool)shouldEverShowTimeIndicators;
- (bool)showsLeftBorder;
- (bool)showsTimeLabel;
- (bool)showsTimeLine;
- (bool)showsTimeMarker;
- (bool)sizeTimeViewUsingOnlyHourText;
- (void)stopScrolling;
- (id)timeView;
- (id)timeViewTextColor;
- (id)timeViewVisualEffect;
- (double)todayScrollSecondBuffer;
- (double)topContentInset;
- (void)updateMarkerPosition;
- (bool)usesVibrantGridDrawing;
- (double)verticalContentInset;
- (void)willMoveToSuperview:(id)arg1;
- (double)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1;

// Image: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axAnnotateScroller;
- (id)accessibilityCustomRotorItemsAtIndex:(long long)arg1;
- (id)accessibilityCustomRotorTitles;
- (id)accessibilityScrollView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orientation:(long long)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(bool)arg5 scrollbarShowsInside:(bool)arg6;

@end