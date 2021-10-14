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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0xfcda597c, "spi_dv_device" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x754d539c, "strlen" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x8d4d8561, "pci_get_slot" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc4142837, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16fdd06b, "spi_attach_transport" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xf10de535, "ioread8" },
	{ 0x11089ac7, "_ctype" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb871c87f, "pci_set_mwi" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x9a932668, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x84972054, "param_ops_byte" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9f0a02d4, "spi_display_xfer_agreement" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x95e38aa1, "pcibios_resource_to_bus" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0xc5534d64, "ioread16" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v00001000d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000008Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "34ECC6A10CAF87113201DAA");
