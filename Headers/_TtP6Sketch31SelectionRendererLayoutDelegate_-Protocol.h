//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, _TtC17SketchControllers20MSCollectionRenderer, _TtC17SketchControllers26MSCollectionRendererLayout;

@protocol _TtP6Sketch31SelectionRendererLayoutDelegate_
- (struct CGAffineTransform)collectionRenderer:(_TtC17SketchControllers20MSCollectionRenderer *)arg1 layout:(_TtC17SketchControllers26MSCollectionRendererLayout *)arg2 transformForItemAt:(long long)arg3;
- (struct CGSize)collectionRenderer:(_TtC17SketchControllers20MSCollectionRenderer *)arg1 layout:(_TtC17SketchControllers26MSCollectionRendererLayout *)arg2 sizeForItemAt:(long long)arg3;

@optional
- (unsigned long long)collectionRenderer:(_TtC17SketchControllers20MSCollectionRenderer *)arg1 resizeHandlesMaskForItemAt:(long long)arg2;
- (BOOL)collectionRenderer:(_TtC17SketchControllers20MSCollectionRenderer *)arg1 layout:(_TtC17SketchControllers26MSCollectionRendererLayout *)arg2 shouldHideHandleOfKind:(NSString *)arg3 forElementOfSize:(struct CGSize)arg4 itemIndex:(long long)arg5;
- (BOOL)collectionRenderer:(_TtC17SketchControllers20MSCollectionRenderer *)arg1 layout:(_TtC17SketchControllers26MSCollectionRendererLayout *)arg2 shouldHideFrameForItemAt:(long long)arg3;
@end

