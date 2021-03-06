//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableSet.h>

@class DVTKnownStringMapping;

@interface DVTMutableKnownStringSet : NSMutableSet
{
    DVTKnownStringMapping *_knownStringMapping;
    CDUnknownFunctionPointerType _stringToIndexFn;
    CDUnknownFunctionPointerType _indexToStringFn;
    unsigned long long _maxKnownStringIndex;
    unsigned long long _knownStringCount;
    char *_knownStringBits;
    NSMutableSet *_unknownStringSet;
}

+ (id)setWithKnownStringMapping:(id)arg1;
- (void).cxx_destruct;
- (id)longDescription;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (id)knownStringMapping;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithKnownStringMapping:(id)arg1;

@end

