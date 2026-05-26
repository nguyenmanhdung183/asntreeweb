# Search History Per-Tab Update

## Overview
Search history is now saved separately for each tab/file. Previously, all search terms were stored in a global storage, so switching between files would show the same history. Now each file maintains its own independent search history.

## Changes Made

### PDF Files (`pdfSearch`)
- **Storage Keys**: `asn_pdf_search_history_{fileId}` 
- **Functions Added**:
  - `getPdfSearchHistoryKey(file)` - Generates unique storage key per file
  - `loadPdfHistoryForFile(file)` - Loads history when switching to a PDF file
- **Modified**:
  - `addPdfHistoryTerm()` - Now saves to file-specific key
  - `useEffect([activeFile])` - Now loads PDF history when activeFile changes

### Other Files (`otherSearch`)
- **Storage Keys**: `asn_other_search_history_{fileId}`
- **Functions Added**:
  - `getOtherSearchHistoryKey(file)` - Generates unique storage key per file
  - `loadOtherHistoryForFile(file)` - Loads history when switching to a file
- **Modified**:
  - `addOtherHistoryTerm()` - Now saves to file-specific key
  - Search history load effect now triggers on `activeFile` change

## How It Works

1. When you open/switch to a file, the application loads that file's search history from sessionStorage
2. Each search term you enter is stored under the file's unique storage key
3. When you switch to another file, the history is cleared and the new file's history is loaded
4. When you return to a previous file, its search history is restored

## Storage
All search history is stored in `sessionStorage` (not persistent across browser sessions):
- Maximum 20 search terms per file
- Duplicates are removed (most recent term appears first)
- Storage keys format: `asn_{type}_search_history_{fileId}`

## Testing Recommendation
1. Open a PDF file and search for something (e.g., "test")
2. Switch to another PDF file and search for something different (e.g., "sample")  
3. Go back to the first PDF - you should see "test" in the history
4. Go back to the second PDF - you should see "sample" in the history

This confirms that each file maintains its own search history.
