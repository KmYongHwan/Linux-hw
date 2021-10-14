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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc5850110, "printk" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0xedc03953, "iounmap" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00009530sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "52BB065AC3FA1D392A97140");
