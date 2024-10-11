#include  <Uefi.h>
#include  <Library/UefiLib.h>

EFI_STATUS
EFIAPI
UefiMain (
    IN EFI_HANDLE ImageHandle,
    IN EFI_SYSTEM_TABLE *SystemTable
    )
{
  Print(L"Hello My OS World!\n");
  while (1);
  return 0;
}
