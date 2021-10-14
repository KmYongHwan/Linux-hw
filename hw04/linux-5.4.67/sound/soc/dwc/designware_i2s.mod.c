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
	{ 0x815588a6, "clk_enable" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x7505d7aa, "devm_snd_dmaengine_pcm_register" },
	{ 0x401fbf7f, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdf0013, "snd_soc_set_runtime_hwparams" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "8EAFED1CE22A3717336844F");
