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
	{ 0x40aebdcf, "sock_release" },
	{ 0x5b6ed908, "metadata_dst_alloc" },
	{ 0x2b22a463, "sock_create_kern" },
	{ 0x90e7b495, "kernel_setsockopt" },
	{ 0xbbf07a47, "kernel_connect" },
	{ 0xf7f9254d, "iptunnel_xmit" },
	{ 0x73d0e3ae, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x9fd8fcb4, "ipv6_stub" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x75815f13, "udp_set_csum" },
	{ 0xf8ac8b96, "kernel_bind" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A315BA6124B0664F4D23FB");
