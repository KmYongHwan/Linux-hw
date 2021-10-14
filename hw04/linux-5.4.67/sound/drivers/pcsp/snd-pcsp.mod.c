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
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x75943e25, "i8253_lock" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x24595cf6, "snd_pcm_lib_free_pages" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x7aeafe04, "snd_pcm_lib_malloc_pages" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x65523885, "snd_card_new" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xee86698c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xeebd5754, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "00541B5F47E452FD67D9F0F");
