//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutView.h>

@class NSButton, NSImage;

@interface IDENavigatorIssueStatusView : DVTStructuredLayoutView
{
    NSButton *_button;
    NSImage *_statusImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSImage *statusImage; // @synthesize statusImage=_statusImage;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (void)setTarget:(id)arg1 andAction:(SEL)arg2;
- (id)init;

@end

