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
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0x1c06f459, "genl_register_family" },
	{ 0x71227479, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8e4c8f52, "inet6_offloads" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x698ac60c, "udp_sock_create6" },
	{ 0x461a82b8, "setup_udp_tunnel_sock" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9da0c2a5, "udp_tunnel_sock_release" },
	{ 0xa85b8b84, "ip_tunnel_encap_del_ops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0x12ea5cd2, "__skb_get_hash" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xabbeabde, "iptunnel_handle_offloads" },
	{ 0x78458706, "inet_protos" },
	{ 0x222d8cd5, "inet_offloads" },
	{ 0x37a0cba, "kfree" },
	{ 0x75815f13, "udp_set_csum" },
	{ 0x789d8622, "genlmsg_put" },
	{ 0x2fe533a8, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe2dcb84f, "inet_get_local_port_range" },
	{ 0x59918df5, "ip_tunnel_encap_add_ops" },
	{ 0x57a0fb8b, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel,ip_tunnel");


MODULE_INFO(srcversion, "4229586F03DCAD1C6693D72");
