//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAlignmentEngineConstraint, NSArray;
@protocol _TtP17SketchControllers36MSLayerPositioningSnapTargetProvider_;

@interface MSLayerPositioningTool : NSObject
{
    // Error parsing type: , name: items
    // Error parsing type: , name: size
    // Error parsing type: , name: anchorPoint
    // Error parsing type: , name: _location
    // Error parsing type: , name: originalLocation
    // Error parsing type: , name: alignmentRectInsets
    // Error parsing type: , name: alignmentSettings
    // Error parsing type: , name: zoomScale
    // Error parsing type: , name: snapTargetProvider
    // Error parsing type: , name: alignmentConstraint
    // Error parsing type: , name: automaticallyChangeArtboard
    // Error parsing type: , name: layerHierarchyHasChanged
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)reset;
- (void)cancel;
- (id)moveByOffset:(struct CGVector)arg1;
- (id)performMoveToLocation:(struct CGPoint)arg1;
- (void)beginWithLayers:(id)arg1 location:(struct CGPoint)arg2;
@property(nonatomic) BOOL layerHierarchyHasChanged; // @synthesize layerHierarchyHasChanged;
@property(nonatomic) BOOL automaticallyChangeArtboard; // @synthesize automaticallyChangeArtboard;
- (id)reportCurrentSnaps;
@property(nonatomic, retain) MSAlignmentEngineConstraint *alignmentConstraint; // @synthesize alignmentConstraint;
@property(nonatomic) __weak id <_TtP17SketchControllers36MSLayerPositioningSnapTargetProvider_> snapTargetProvider; // @synthesize snapTargetProvider;
@property(nonatomic) double zoomScale; // @synthesize zoomScale;
@property(nonatomic) struct CGPoint originalLocation; // @synthesize originalLocation;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
@property(nonatomic, readonly) struct CGPoint position;
@property(nonatomic, copy) NSArray *items; // @synthesize items;

@end

