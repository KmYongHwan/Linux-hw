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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x810a31e8, "snd_pcm_hw_constraint_step" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x323ad9a7, "snd_pcm_hw_constraint_msbits" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb384607f, "snd_pcm_stop_xrun" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xfb1858a0, "snd_jack_new" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0x65523885, "snd_card_new" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0xedc03953, "iounmap" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x82351cde, "snd_pcm_add_chmap_ctls" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa9e724fe, "snd_jack_report" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "ADA5E87E3AC94181D3EAFF1");
