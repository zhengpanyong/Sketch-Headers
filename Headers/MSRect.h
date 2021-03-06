//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/_MSRect.h>

#import <SketchModel/MSRect-Protocol.h>

@interface MSRect : _MSRect <MSRect>
{
    long long _proportionsTempDisabled;
    unsigned long long _batchEditsCount;
    struct CGRect _oldRect;
    double _right;
    double _bottom;
    double _proportions;
}

+ (id)rectWithUnionOfRects:(id)arg1;
+ (id)rectWithRect:(struct CGRect)arg1;
+ (id)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
@property(nonatomic) double proportions; // @synthesize proportions=_proportions;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(nonatomic) double right; // @synthesize right=_right;
- (BOOL)isIntegral;
- (void)endEditing;
- (void)beginEditing;
- (void)processEditing;
- (void)editedFromRect:(struct CGRect)arg1;
- (void)setRectByIgnoringProportions:(struct CGRect)arg1;
- (void)setConstrainProportions:(BOOL)arg1;
- (void)calculateProportions;
@property(nonatomic) struct CGPoint mid;
- (id)description;
- (void)log;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) BOOL primitiveConstrainProportions;
- (id)scaleBy:(double)arg1;
@property(nonatomic) double midY;
@property(nonatomic) double midX;
@property(nonatomic) double maxY;
@property(nonatomic) double minY;
@property(nonatomic) double maxX;
@property(nonatomic) double minX;
@property(nonatomic) double top;
@property(nonatomic) double left;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) struct CGSize size;
- (void)makeRectIntegral;
- (void)makeOriginIntegral;
@property(nonatomic) struct CGRect rect;
- (void)setY:(double)arg1;
- (void)setX:(double)arg1;
- (void)setHeight:(double)arg1;
- (id)delegate;
- (void)setWidth:(double)arg1;
- (BOOL)shouldConstrainProportions;
- (void)performUpdatesWithUnconstrainedProportions:(CDUnknownBlockType)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)objectDidInit;
- (id)initWithRect:(struct CGRect)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;

@end

