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
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0xa129b76e, "unregister_console" },
	{ 0xc390aec5, "register_console" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xca1e1601, "tty_port_link_device" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0xff7a02a6, "tty_port_open" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F5B253AB01C338BDF703B18");
