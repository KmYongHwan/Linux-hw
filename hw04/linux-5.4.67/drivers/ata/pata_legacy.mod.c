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
	{ 0x95b41ce, "ata_sff_port_ops" },
	{ 0x431f7b85, "ata_cable_40wire" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x92992539, "ata_host_detach" },
	{ 0xa5efbf4c, "async_synchronize_full" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0x3a4f6a32, "ata_sff_interrupt" },
	{ 0x2e4cde64, "ata_port_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x573ce728, "ata_host_alloc" },
	{ 0xfbee36f, "devm_ioport_map" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xa2c454, "ata_sff_data_xfer32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x74aa4167, "ata_dev_printk" },
	{ 0xd7d81ba0, "ata_dev_next" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc5534d64, "ioread16" },
	{ 0x2b691a14, "ata_dev_pair" },
	{ 0x50c42ad0, "ata_sff_qc_issue" },
	{ 0x304d0eed, "ata_pio_need_iordy" },
	{ 0xce29fbb3, "ata_timing_compute" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x29466217, "ata_sff_data_xfer" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C714B3C8B30EB33E146C061");
