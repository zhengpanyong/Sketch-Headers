//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSSnapOverlayController.h"

#import "MSSpecRendererLayoutDelegate-Protocol.h"

@interface MSSnapOverlayController (Sketch1) <MSSpecRendererLayoutDelegate>
- (id)specRenderer:(id)arg1 textForMeasurement:(long long)arg2 vector:(struct CGVector)arg3;
- (BOOL)specRenderer:(id)arg1 shouldHideItemAtIndex:(long long)arg2 startpoint:(struct CGPoint)arg3 endpoint:(struct CGPoint)arg4;
- (struct CGRect)specRenderer:(id)arg1 rectForEndOfItemAtIndex:(long long)arg2;
- (struct CGRect)specRenderer:(id)arg1 rectForStartOfItemAtIndex:(long long)arg2;
- (struct CGRect)specRenderer:(id)arg1 spaceRectForMeasurementAt:(long long)arg2;
- (struct CGPoint)specRenderer:(id)arg1 endpointForItemAtIndex:(long long)arg2 startpoint:(struct CGPoint)arg3;
- (struct CGPoint)specRenderer:(id)arg1 startpointForItemAtIndex:(long long)arg2;
- (BOOL)specRenderer:(id)arg1 isSnapAtIndex:(long long)arg2;
@end

