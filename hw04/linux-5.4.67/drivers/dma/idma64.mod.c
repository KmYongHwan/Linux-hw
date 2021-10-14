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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8a56d877, "dma_async_device_register" },
	{ 0x2196871a, "vchan_init" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x63896da4, "vchan_tx_desc_free" },
	{ 0xe995c512, "vchan_tx_submit" },
	{ 0xec4b7ee9, "dma_async_tx_descriptor_init" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x26ed9c6e, "vchan_dma_desc_free_list" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xb8656bce, "vchan_find_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0x77738a68, "dma_async_device_unregister" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "virt-dma");


MODULE_INFO(srcversion, "E0CD1C5BFF73C86BC5E05D2");
