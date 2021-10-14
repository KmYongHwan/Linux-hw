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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x7137f851, "watchdog_unregister_device" },
	{ 0x637d18c6, "watchdog_register_device" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x2ee76e44, "watchdog_init_timeout" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xf1e046cc, "panic" },
	{ 0xc5850110, "printk" },
	{ 0x9415ca79, "__module_get" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xf720a60b, "module_put" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x1d47cf8b, "watchdog_notify_pretimeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "49C9EA0503A041AAB708DAE");
