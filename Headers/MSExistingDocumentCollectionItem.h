//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSWelcomeCollectionItem.h"

@class NSURL;

@interface MSExistingDocumentCollectionItem : MSWelcomeCollectionItem
{
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)fetchPreviewImageWithMaximumPixelSize:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)providesPreviewImage;
- (id)title;
- (id)initWithController:(id)arg1 URL:(id)arg2;

@end

