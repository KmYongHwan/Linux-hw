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
	{ 0xce97fe12, "nf_log_unregister" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xf3a2353a, "nf_log_register" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0x628255f2, "nf_log_dump_packet_common" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0x3785c132, "init_net" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x530863f9, "nf_log_dump_tcp_header" },
	{ 0x43f0b03d, "nf_log_dump_sk_uid_gid" },
	{ 0x6f03e767, "nf_log_dump_udp_header" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xd088fa24, "nf_log_set" },
	{ 0xc9357388, "nf_log_unset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_log_common");


MODULE_INFO(srcversion, "8FCD1C64185EDAA91986319");
