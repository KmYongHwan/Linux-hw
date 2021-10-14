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
	{ 0xbf793710, "ata_common_sdev_attrs" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0x5b82c2f1, "ata_bmdma32_port_ops" },
	{ 0x431f7b85, "ata_cable_40wire" },
	{ 0x257c8ed2, "ata_cable_unknown" },
	{ 0xfaddb08b, "ata_bmdma_port_ops" },
	{ 0x2ed9661d, "ata_cable_ignore" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0xce29fbb3, "ata_timing_compute" },
	{ 0x2b691a14, "ata_dev_pair" },
	{ 0xd7d81ba0, "ata_dev_next" },
	{ 0xddb1eed3, "ata_port_printk" },
	{ 0x743a165e, "ata_pack_xfermask" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xae5a3281, "ata_acpi_gtm_xfermask" },
	{ 0x9e4b4595, "ata_sff_prereset" },
	{ 0x788881ae, "pci_test_config_bits" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x63559014, "ata_print_version" },
	{ 0xcee0a545, "ata_pci_bmdma_init_one" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x32046a39, "ata_pci_bmdma_clear_simplex" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00007401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007441sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007469sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000265sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000036Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000448sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000056Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000759sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000209Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00002092sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D09865363AB45357511C26B");
