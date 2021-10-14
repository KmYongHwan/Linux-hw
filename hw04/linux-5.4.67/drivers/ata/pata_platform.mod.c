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
	{ 0x573ce728, "ata_host_alloc" },
	{ 0x3a4f6a32, "ata_sff_interrupt" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x2e58bd5f, "ata_platform_remove_one" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x95b41ce, "ata_sff_port_ops" },
	{ 0xa2c454, "ata_sff_data_xfer32" },
	{ 0x2e4cde64, "ata_port_desc" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xd7d81ba0, "ata_dev_next" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0x74aa4167, "ata_dev_printk" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x29466217, "ata_sff_data_xfer" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0x257c8ed2, "ata_cable_unknown" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0xbf793710, "ata_common_sdev_attrs" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0xfbee36f, "devm_ioport_map" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B35F676C830137BFDB06626");
