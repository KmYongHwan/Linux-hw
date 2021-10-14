#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x8b319d05, "ahci_platform_ops" },
	{ 0xdeaeab9e, "ahci_sdev_attrs" },
	{ 0xb8563810, "ahci_shost_attrs" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0xf163984b, "ata_scsi_change_queue_depth" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0x5d900ec3, "ahci_platform_resume" },
	{ 0xaf3a00b3, "ahci_platform_suspend" },
	{ 0x330526be, "ahci_platform_shutdown" },
	{ 0x2e58bd5f, "ata_platform_remove_one" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x58af8b05, "ahci_platform_disable_resources" },
	{ 0x81d05113, "ahci_platform_init_host" },
	{ 0x7b277b70, "acpi_device_get_match_data" },
	{ 0x62eb6548, "ahci_platform_enable_resources" },
	{ 0xbef18f97, "ahci_platform_get_resources" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libahci_platform,libahci");

MODULE_ALIAS("acpi*:APMC0D33:*");
MODULE_ALIAS("acpi*:010601:*");
MODULE_ALIAS("of:N*T*Cgeneric-ahci");
MODULE_ALIAS("of:N*T*Cgeneric-ahciC*");
MODULE_ALIAS("of:N*T*Csnps,spear-ahci");
MODULE_ALIAS("of:N*T*Csnps,spear-ahciC*");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahci");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahciC*");
MODULE_ALIAS("of:N*T*Csnps,dwc-ahci");
MODULE_ALIAS("of:N*T*Csnps,dwc-ahciC*");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahci");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahciC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-ahci");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-ahciC*");

MODULE_INFO(srcversion, "35BA96E8F2E83B47C313BF1");
