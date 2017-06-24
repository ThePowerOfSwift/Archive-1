/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageViewPrivate : NSObject {
    PDFAnnotation * activeAnnotation;
    id  activeControl;
    CALayer * backgroundLayer;
    NSMutableSet * coachMarks;
    id  control;
    PDFAnnotation * controlAnnotation;
    long long  displayBox;
    bool  hasBackgroundImage;
    PDFPage * page;
    PDFPageLayer * pageLayer;
    NSMapTable * pageWidgetMapTable;
    PDFPageSearchLayer * searchLayer;
    PDFPageSelectionLayer * selectionLayer;
    bool  shouldAntiAlias;
    unsigned long long  visibilityDelegateIndex;
}

- (void).cxx_destruct;

@end