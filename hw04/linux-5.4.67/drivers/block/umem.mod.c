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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x16933923, "put_disk" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbfdf08f5, "blk_queue_split" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x2d715234, "bio_endio" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9b64a05d, "blk_queue_make_request" },
	{ 0x88120424, "blk_alloc_queue_node" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001332d00005415sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001332d00005425sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001332d00006155sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000B555sv00001332sd00005460bc*sc*i*");

MODULE_INFO(srcversion, "B2450F96B3B76ACAC175DB0");
