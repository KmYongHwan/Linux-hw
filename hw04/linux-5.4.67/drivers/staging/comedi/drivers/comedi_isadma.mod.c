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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x72b243d4, "free_dma" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf82abc1d, "isa_dma_bridge_buggy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x175e33fb, "dma_spin_lock" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "86ACA22D1A17D2030C59E7A");
