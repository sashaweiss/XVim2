//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SourceEditor/CALayerDelegate-Protocol.h>
#import <SourceEditor/NSAccessibilityCustomRotorItemSearchDelegate-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC12SourceEditor23SourceEditorContentView : NSView <NSAccessibilityCustomRotorItemSearchDelegate, CALayerDelegate>
{
    MISSING_TYPE *contentLayer;
    MISSING_TYPE *underlayLayer;
    MISSING_TYPE *overlayLayer;
    MISSING_TYPE *viewportLineRange;
    MISSING_TYPE *layoutManager;
    MISSING_TYPE *fullBleedFrame;
    MISSING_TYPE *requiredVisibleY;
    MISSING_TYPE *accessoryMargins;
    MISSING_TYPE *contentMargins;
    MISSING_TYPE *additionalLeftPadding;
    MISSING_TYPE *overscrollMargin;
    MISSING_TYPE *printScale;
    MISSING_TYPE *responderProxy;
    MISSING_TYPE *axAnnotations;
    MISSING_TYPE *needAnnotationAccessibilityUpdate;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
- (void)layoutIfNeeded;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidChangeBackingProperties;
- (BOOL)isFlipped;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (id)accessibilityCustomRotors;
- (id)rotor:(id)arg1 resultForSearchParameters:(id)arg2;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (long long)accessibilityInsertionPointLineNumber;
- (void)setAccessibilityVisibleCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (long long)accessibilityNumberOfCharacters;
- (struct _NSRange)accessibilitySharedCharacterRange;
- (id)accessibilitySharedTextUIElements;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2;
- (id)accessibilityParameterizedAttributeNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)setAccessibilitySelectedText:(id)arg1;
- (id)accessibilitySelectedText;
- (id)accessibilitySelectedTextRanges;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilitySelectedTextRange;
- (void)setAccessibilityValue:(id)arg1;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) NSString *description;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

