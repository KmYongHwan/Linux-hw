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
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xbdf0013, "snd_soc_set_runtime_hwparams" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x8f991301, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x85b7373, "spi_sync" },
	{ 0x22ea672b, "snd_soc_rtdcom_lookup" },
	{ 0x5855a5b7, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x19fe29ed, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Crealtek,rt5514");
MODULE_ALIAS("of:N*T*Crealtek,rt5514C*");

MODULE_INFO(srcversion, "6B706D7860B4A9AECABA491");
