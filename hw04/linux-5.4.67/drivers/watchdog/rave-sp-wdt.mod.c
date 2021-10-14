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
	{ 0x890b3d61, "_dev_err" },
	{ 0x4b8b9322, "devm_watchdog_register_device" },
	{ 0x1a0963d5, "devm_register_reboot_notifier" },
	{ 0x7a591d88, "watchdog_set_restart_priority" },
	{ 0x2ee76e44, "watchdog_init_timeout" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0xf04680a5, "nvmem_cell_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x43e53ef9, "rave_sp_exec" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rave-sp");

MODULE_ALIAS("of:N*T*Czii,rave-sp-watchdog-legacy");
MODULE_ALIAS("of:N*T*Czii,rave-sp-watchdog-legacyC*");
MODULE_ALIAS("of:N*T*Czii,rave-sp-watchdog");
MODULE_ALIAS("of:N*T*Czii,rave-sp-watchdogC*");

MODULE_INFO(srcversion, "20C3703D24A60653051F7DE");
