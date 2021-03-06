//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

#import "BCSideBarViewControllerDelegate-Protocol.h"
#import "MSCloudExportableDocument-Protocol.h"
#import "MSDocumentDataDelegate-Protocol.h"
#import "MSEventHandlerManagerDelegate-Protocol.h"
#import "MSMenuBuilderDelegate-Protocol.h"
#import "MSSidebarControllerDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class BCSideBarViewController, MSActionController, MSArtboardGroup, MSAssetLibraryController, MSBackButtonController, MSBadgeController, MSCacheManager, MSContentDrawViewController, MSDocumentData, MSEventHandlerManager, MSHistoryMaker, MSImmutableDocumentData, MSInspectorController, MSLayerArray, MSMainSplitViewController, MSToolbarConstructor, MSTreeDiff, NSArray, NSColorSpace, NSDictionary, NSMutableDictionary, NSResponder, NSString, NSView, NSWindow, SCKShare;

@interface MSDocument : NSDocument <MSCloudExportableDocument, MSSidebarControllerDelegate, BCSideBarViewControllerDelegate, NSMenuDelegate, NSToolbarDelegate, NSWindowDelegate, MSEventHandlerManagerDelegate, MSDocumentDataDelegate, MSMenuBuilderDelegate>
{
    BOOL _nextReadFromURLIsReload;
    BOOL _hasOpenedImageFile;
    BOOL _layerSelectionChangeScheduled;
    BOOL _cacheFlushInProgress;
    BOOL _hasScheduledInspectorReload;
    NSArray *_exportableLayerSelection;
    MSTreeDiff *_treeDiffForSupplementaryViews;
    NSWindow *_documentWindow;
    NSView *_messageView;
    MSMainSplitViewController *_splitViewController;
    NSView *_inspectorPlaceholderView;
    NSView *_canvasPlaceholderView;
    MSToolbarConstructor *_toolbarConstructor;
    MSActionController *_actionsController;
    MSBadgeController *_badgeController;
    MSDocumentData *_documentData;
    MSEventHandlerManager *_eventHandlerManager;
    MSCacheManager *_cacheManager;
    MSHistoryMaker *_historyMaker;
    MSInspectorController *_inspectorController;
    BCSideBarViewController *_sidebarController;
    MSContentDrawViewController *_currentContentViewController;
    id _colorSpaceMismatchWarning;
    id _editingLibraryWarning;
    MSImmutableDocumentData *_documentDataUsedForSupplementaryViews;
    double _mostRecentCacheFlushingTime;
    NSMutableDictionary *_mutableUIMetadata;
    MSBackButtonController *_backButtonController;
    NSMutableDictionary *_originalViewportsForEditedSymbols;
    MSLayerArray *_previousSelectedLayers;
    MSArtboardGroup *_focusedArtboard;
}

+ (id)currentDocument;
+ (id)windowForSheet;
+ (BOOL)isNativeType:(id)arg1;
+ (id)writableTypes;
+ (id)readableTypes;
+ (BOOL)autosavesInPlace;
@property(nonatomic) __weak MSArtboardGroup *focusedArtboard; // @synthesize focusedArtboard=_focusedArtboard;
@property(copy, nonatomic) MSLayerArray *previousSelectedLayers; // @synthesize previousSelectedLayers=_previousSelectedLayers;
@property(nonatomic) BOOL hasScheduledInspectorReload; // @synthesize hasScheduledInspectorReload=_hasScheduledInspectorReload;
@property(retain, nonatomic) NSMutableDictionary *originalViewportsForEditedSymbols; // @synthesize originalViewportsForEditedSymbols=_originalViewportsForEditedSymbols;
@property(retain, nonatomic) MSBackButtonController *backButtonController; // @synthesize backButtonController=_backButtonController;
@property(retain, nonatomic) NSMutableDictionary *mutableUIMetadata; // @synthesize mutableUIMetadata=_mutableUIMetadata;
@property BOOL cacheFlushInProgress; // @synthesize cacheFlushInProgress=_cacheFlushInProgress;
@property double mostRecentCacheFlushingTime; // @synthesize mostRecentCacheFlushingTime=_mostRecentCacheFlushingTime;
@property(nonatomic) BOOL layerSelectionChangeScheduled; // @synthesize layerSelectionChangeScheduled=_layerSelectionChangeScheduled;
@property(retain, nonatomic) MSImmutableDocumentData *documentDataUsedForSupplementaryViews; // @synthesize documentDataUsedForSupplementaryViews=_documentDataUsedForSupplementaryViews;
@property(retain, nonatomic) id editingLibraryWarning; // @synthesize editingLibraryWarning=_editingLibraryWarning;
@property(retain, nonatomic) id colorSpaceMismatchWarning; // @synthesize colorSpaceMismatchWarning=_colorSpaceMismatchWarning;
@property(nonatomic) BOOL hasOpenedImageFile; // @synthesize hasOpenedImageFile=_hasOpenedImageFile;
@property(nonatomic) BOOL nextReadFromURLIsReload; // @synthesize nextReadFromURLIsReload=_nextReadFromURLIsReload;
@property(retain, nonatomic) MSContentDrawViewController *currentContentViewController; // @synthesize currentContentViewController=_currentContentViewController;
@property(retain, nonatomic) BCSideBarViewController *sidebarController; // @synthesize sidebarController=_sidebarController;
@property(retain, nonatomic) MSInspectorController *inspectorController; // @synthesize inspectorController=_inspectorController;
@property(retain, nonatomic) MSHistoryMaker *historyMaker; // @synthesize historyMaker=_historyMaker;
@property(readonly, nonatomic) MSCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(retain, nonatomic) MSEventHandlerManager *eventHandlerManager; // @synthesize eventHandlerManager=_eventHandlerManager;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(retain, nonatomic) MSBadgeController *badgeController; // @synthesize badgeController=_badgeController;
@property(retain, nonatomic) MSActionController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) MSToolbarConstructor *toolbarConstructor; // @synthesize toolbarConstructor=_toolbarConstructor;
@property(retain, nonatomic) NSView *canvasPlaceholderView; // @synthesize canvasPlaceholderView=_canvasPlaceholderView;
@property(retain, nonatomic) NSView *inspectorPlaceholderView; // @synthesize inspectorPlaceholderView=_inspectorPlaceholderView;
@property(nonatomic) __weak MSMainSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(retain, nonatomic) NSView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) NSWindow *documentWindow; // @synthesize documentWindow=_documentWindow;
- (void).cxx_destruct;
- (void)coalescedDetermineArtboardNotification:(id)arg1;
- (void)updateFocusedArtboard:(id)arg1;
- (void)installedFontsDidChange;
- (void)returnToDefaultFirstResponder;
- (id)previewColorSpaceForItem:(id)arg1;
- (void)warnIfPluginsDisabled;
- (void)warnIfEditingLibrary;
- (BOOL)isLibraryDocument;
- (void)showNonDefaultColorSpaceWarningIfApplicable;
- (id)symbolReferenceForRecipe:(id)arg1;
- (id)localObjectForObjectReference:(id)arg1;
- (void)eventHandlerManager:(id)arg1 didChangeCurrentHandler:(id)arg2;
- (void)refreshWindowBadge;
- (void)reloadTouchBars;
- (void)libraryControllerDidChange:(id)arg1;
@property(nonatomic) BOOL pageListCollapsed;
@property(nonatomic) double pageListHeight;
@property(readonly, nonatomic) MSAssetLibraryController *libraryController;
- (id)documentData:(id)arg1 metadataForKey:(id)arg2 object:(id)arg3;
- (void)documentData:(id)arg1 storeMetadata:(id)arg2 forKey:(id)arg3 object:(id)arg4;
@property(retain, nonatomic) NSDictionary *UIMetadata;
- (void)setFileURL:(id)arg1;
- (void)visitSymbolMasterWithID:(id)arg1;
- (void)openLibrariesForForeignObjects:(id)arg1;
- (void)visitSymbolMaster:(id)arg1 withReturnInstance:(id)arg2;
- (void)removeViewportForArtboard:(id)arg1;
- (BOOL)canRestoreViewportAfterArtboardEdit:(id)arg1;
- (void)restoreViewportAfterArtboardEdit:(id)arg1;
- (void)storeViewport:(id)arg1 andInstance:(id)arg2 forArtboard:(id)arg3;
- (BOOL)isShowingMeasurements;
- (void)documentData:(id)arg1 temporarilyHideSelectionForLayers:(id)arg2;
- (void)flagsChangedNotification:(id)arg1;
- (BOOL)layerHasHoverStateInCanvas:(id)arg1;
- (void)sidebarController:(id)arg1 hoveredLayerDidChangeTo:(id)arg2;
- (id)sidebarControllerContextMenuItemsForCurrentSelection:(id)arg1;
- (void)sidebarController:(id)arg1 validateRemovalOfPages:(id)arg2 withRemovalBlock:(CDUnknownBlockType)arg3;
- (void)sidebarController:(id)arg1 didChangeSelection:(id)arg2;
- (void)sidebarControllerDidUpdate:(id)arg1;
- (void)scheduleSelectionChangedUpdatesIfNecessary;
- (void)prepareToDrawEventHandlers:(id)arg1;
- (void)refreshLayerListIfNecessary;
- (void)refreshSupplementaryViews;
- (void)refreshSidebarWithMask:(unsigned long long)arg1;
- (void)renderStartedIn:(id)arg1;
- (void)contentDrawViewWillDraw:(id)arg1;
@property(readonly, nonatomic) MSTreeDiff *treeDiffForSupplementaryViews; // @synthesize treeDiffForSupplementaryViews=_treeDiffForSupplementaryViews;
- (void)documentDidChange:(id)arg1;
- (void)debugRunJSAPIUnitTests:(id)arg1;
- (void)debugCountObject:(id)arg1 counts:(id)arg2;
- (void)debugCountObjects:(id)arg1;
- (void)layerTreeLayoutDidChange;
- (void)layerPositionPossiblyChanged;
- (id)addBlankPage;
- (void)toggleClickThrough:(id)arg1;
- (BOOL)isInspectorVisible;
- (BOOL)isLayerListVisible;
- (void)windowDidExitVersionBrowser:(id)arg1;
- (void)windowDidEnterVersionBrowser:(id)arg1;
- (BOOL)isRulersVisible;
- (id)pages;
- (id)layerStyles;
- (void)removePage:(id)arg1;
- (void)setCurrentPage:(id)arg1;
- (id)artboards;
- (id)normalHandler;
- (id)toggleHandlerClass:(Class)arg1;
- (void)scheduleReloadInspector;
- (void)reloadInspector;
- (void)reloadView;
- (void)refreshOverlay;
- (void)deleteSymbolMasters:(id)arg1;
- (id)actionForMenu:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)checkForTextLayerChanges:(id)arg1;
- (void)historyMakerDidProgressHistory:(id)arg1;
- (void)historyMakerDidRevertHistory:(id)arg1;
- (void)historyMaker:(id)arg1 didApplyHistoryUpdate:(unsigned long long)arg2;
- (void)registerHistoryMomentTitle:(id)arg1;
- (void)updateSelectionFollowingChangeToImmutableDocumentData;
- (void)changeToImmutableDocumentData:(id)arg1 selecting:(id)arg2 onPage:(id)arg3;
- (void)commitHistoryIfNecessary:(id)arg1;
- (void)flushCachesIfNecessary;
- (void)zoomValueDidChange;
- (struct CGRect)visibleCanvasRectForDocumentData:(id)arg1;
- (void)performPageSwitchUpdates;
- (BOOL)inspectorIsMain;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (id)closestVisibleIdentifierInToolbarForIdentifier:(id)arg1;
- (BOOL)isSeparatorIdentifier:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (id)currentHandlerKey;
- (id)currentHandler;
- (void)updateFilterSettings;
- (void)onFilterChanged:(id)arg1;
- (void)validateMenuItemTitleAndState:(id)arg1;
- (BOOL)hasArtboards;
- (BOOL)validateMenuItem:(id)arg1;
- (void)putSelectionBackInCanvasIfPossible;
- (void)updateHistory;
- (void)performSelectionChangedUpdates;
- (id)selectedLayers;
- (id)duplicateAndReturnError:(id *)arg1;
- (id)currentPage;
- (void)exportSliceLayers:(id)arg1;
@property(retain, nonatomic) NSArray *exportableLayerSelection; // @synthesize exportableLayerSelection=_exportableLayerSelection;
- (id)allExportableLayers;
- (void)returnToNormalHandler;
- (void)currentHandlerChanged;
- (id)windowNibName;
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
- (id)toolbar;
- (BOOL)shouldCreateToolbar;
- (void)showWindows;
- (void)windowControllerDidLoadNib:(id)arg1;
- (BOOL)validateSelectionOfLayer:(id)arg1 proposedIDsOfLayersToSelect:(id)arg2;
- (void)loadLayerListPanel;
@property(readonly, nonatomic) MSImmutableDocumentData *immutableDocumentData;
- (void)resetDocumentData:(id)arg1;
- (void)loadInspectorPanel;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)awakeFromNib;
- (void)updateCountDownButton;
- (void)wireDocumentDataToUI;
@property(readonly, nonatomic) NSResponder *defaultFirstResponder;
- (id)contentDrawView;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)notifyIfDocumentResignedCurrent;
- (void)notifyIfDocumentBecameCurrent;
@property(readonly, nonatomic) BOOL isCurrent;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (id)window;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)close;
- (void)setViewsToNil;
- (void)setViewControllersToNil;
- (void)setDelegatesToNil;
- (void)createActions;
@property(readonly, nonatomic) NSColorSpace *canvasColorSpace;
@property(readonly, nonatomic) NSColorSpace *documentColorSpace;
@property(readonly, nonatomic) NSColorSpace *colorSpace;
- (id)init;
@property(retain, nonatomic) SCKShare *cloudShare;
- (id)cloudDocumentKey;
@property(readonly, nonatomic) NSString *cloudName;
- (id)hudDocumentData;
- (void)hudSetMonitor:(id)arg1;
- (id)hudClientName;
- (id)askForUserInput:(id)arg1 ofType:(long long)arg2 initialValue:(id)arg3;
- (id)askForUserInput:(id)arg1 initialValue:(id)arg2;
- (void)showMessage:(id)arg1;
- (void)saveDocumentToURL:(id)arg1 saveMode:(unsigned long long)arg2 context:(id)arg3 callback:(id)arg4;
- (id)dataForRequest:(id)arg1 ofType:(id)arg2;
- (void)saveExportRequest:(id)arg1 toFile:(id)arg2;
- (id)exportRequestWithName:(id)arg1 rect:(struct CGRect)arg2;
- (id)exportRequestForArtboardOrSlice:(id)arg1;
- (void)saveArtboardOrSlice:(id)arg1 toFile:(id)arg2;
- (id)pluginContext;
- (BOOL)askToOpenDocumentRepairingMetadata;
- (BOOL)askToOpenDocumentWithMissingFonts:(id)arg1 savingWillChangeFonts:(BOOL)arg2;
- (BOOL)alertDocumentCorruptionWasDetected;
- (void)contactSupportAction:(id)arg1;
- (BOOL)handleNewerDocument:(id)arg1 error:(id *)arg2;
- (long long)askToOpenNewerDocument;
- (void)resetImportedDocument:(id)arg1;
- (BOOL)readImageFromPath:(id)arg1 error:(id *)arg2;
- (id)addLayerFromImageAtURL:(id)arg1 toGroup:(id)arg2 fitPixels:(BOOL)arg3 error:(id *)arg4;
- (void)migrateUIMetadataWithDocumentData:(id)arg1;
- (BOOL)readFromDocumentWrapper:(id)arg1 ofType:(id)arg2 corruptionDetected:(char *)arg3 error:(id *)arg4;
- (void)reportMigrationNoLongerAvailable;
- (BOOL)validateDocument:(id)arg1 error:(id *)arg2;
- (BOOL)readDocumentFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readEPSFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readPDFFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readSVGFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)reportSaveActionAtURL:(id)arg1 wasAutosave:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)prepareForSaveOperation:(unsigned long long)arg1;
- (id)actionClasses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

