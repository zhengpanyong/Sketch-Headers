//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

#import "MSInspectorItemDelegate-Protocol.h"

@class MSExportBackgroundColorInspectorItem, MSExportPreviewImagesInspectorItem, MSExportPropertiesInspectorItem, MSIncludeBackgroundColorInExportInspectorItem, MSIncludeBackgroundColorInInstancesInspectorItem, NSString;

@interface MSExportPreviewInspectorSection : MSBaseInspectorSection <MSInspectorItemDelegate>
{
    MSExportPreviewImagesInspectorItem *_imagesItem;
    MSExportBackgroundColorInspectorItem *_backgroundColorItem;
    MSExportPropertiesInspectorItem *_sliceProperties;
    MSIncludeBackgroundColorInExportInspectorItem *_includeInExportItem;
    MSIncludeBackgroundColorInInstancesInspectorItem *_includeInInstancesItem;
}

@property(retain, nonatomic) MSIncludeBackgroundColorInInstancesInspectorItem *includeInInstancesItem; // @synthesize includeInInstancesItem=_includeInInstancesItem;
@property(retain, nonatomic) MSIncludeBackgroundColorInExportInspectorItem *includeInExportItem; // @synthesize includeInExportItem=_includeInExportItem;
@property(retain, nonatomic) MSExportPropertiesInspectorItem *sliceProperties; // @synthesize sliceProperties=_sliceProperties;
@property(retain, nonatomic) MSExportBackgroundColorInspectorItem *backgroundColorItem; // @synthesize backgroundColorItem=_backgroundColorItem;
@property(retain, nonatomic) MSExportPreviewImagesInspectorItem *imagesItem; // @synthesize imagesItem=_imagesItem;
- (void).cxx_destruct;
- (void)updateItems;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
