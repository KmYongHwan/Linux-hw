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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x6ac36405, "phy_init" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc7f67a21, "devm_of_phy_get_by_index" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xddfad5ee, "usb_gadget_map_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9286c9fc, "usb_del_gadget_udc" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xdf1dd53b, "usb_gadget_set_state" },
	{ 0x726e8b16, "phy_power_off" },
	{ 0xbcc9914b, "usb_gadget_unmap_request" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x63fd46c1, "phy_power_on" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc645475b, "phy_exit" },
	{ 0xaf01bb80, "usb_add_gadget_udc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0xbca28682, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "5742A59F04E48CEF0E2CDA9");
