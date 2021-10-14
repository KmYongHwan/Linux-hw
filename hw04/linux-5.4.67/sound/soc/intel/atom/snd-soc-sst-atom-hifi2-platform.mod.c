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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x349cba85, "strchr" },
	{ 0x754d539c, "strlen" },
	{ 0x810a31e8, "snd_pcm_hw_constraint_step" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xebc82836, "snd_soc_dapm_get_volsw" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1774b2b1, "snd_soc_dapm_new_controls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe811333c, "snd_pcm_hw_constraint_integer" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x668b19a1, "down_read" },
	{ 0xf7562444, "snd_soc_dapm_add_routes" },
	{ 0xe1d03cbd, "snd_soc_poweroff" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa583793a, "dapm_kcontrol_get_value" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xdd450d90, "snd_soc_add_component_controls" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc110bb45, "snd_soc_dapm_put_volsw" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0x57ab98dd, "snd_soc_info_volsw" },
	{ 0x22ea672b, "snd_soc_rtdcom_lookup" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf720a60b, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x297b513c, "snd_soc_dapm_new_widgets" },
	{ 0x40dc72fb, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfd975966, "snd_soc_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x8e846a6c, "snd_soc_new_compress" },
	{ 0x8f51051f, "snd_soc_resume" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "A0EEC310126A58E2A62E63D");
