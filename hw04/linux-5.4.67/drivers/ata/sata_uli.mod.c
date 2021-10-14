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
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0xbf793710, "ata_common_sdev_attrs" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0xfaddb08b, "ata_bmdma_port_ops" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2e4cde64, "ata_port_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xc3e0dc78, "pci_intx" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x63559014, "ata_print_version" },
	{ 0x766cefdd, "ata_pci_bmdma_init" },
	{ 0x303d14ce, "ata_pci_sff_init_host" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa5c0017, "ata_host_alloc_pinfo" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B9d00005289sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005281sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2A378ED60E776C525FC8FD5");
