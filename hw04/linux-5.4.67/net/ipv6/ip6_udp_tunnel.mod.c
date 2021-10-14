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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x8fff4a84, "udp6_set_csum" },
	{ 0x40aebdcf, "sock_release" },
	{ 0x2b22a463, "sock_create_kern" },
	{ 0x90e7b495, "kernel_setsockopt" },
	{ 0xbbf07a47, "kernel_connect" },
	{ 0x73d0e3ae, "kernel_sock_shutdown" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf8ac8b96, "kernel_bind" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x89ff1e0d, "ip6_local_out" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "56C72BFC40F54931C4FFEDB");
