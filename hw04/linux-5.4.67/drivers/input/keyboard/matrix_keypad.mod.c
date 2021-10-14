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
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5ada0011, "input_event" },
	{ 0xdcca3259, "gpiod_get_raw_value_cansleep" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xff76d558, "input_register_device" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x890ce5c1, "matrix_keypad_build_keymap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0xc88d8e8e, "gpiod_set_raw_value_cansleep" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matrix-keymap");


MODULE_INFO(srcversion, "BEECF11A9AAE07F003A4CAE");
