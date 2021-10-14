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
	{ 0xeb939f88, "xfrm6_rcv" },
	{ 0x167ad61b, "xfrm_input" },
	{ 0x29e8c85e, "xfrm4_rcv" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x582b6275, "xfrm_if_unregister_cb" },
	{ 0x22128ca5, "unregister_pernet_device" },
	{ 0x9b076ac6, "xfrm_if_register_cb" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x59ee4286, "xfrm6_protocol_register" },
	{ 0xf65ac253, "xfrm4_protocol_register" },
	{ 0x3e294cf7, "register_pernet_device" },
	{ 0xebd2b967, "ipv4_update_pmtu" },
	{ 0xb0127f23, "ipv4_redirect" },
	{ 0xf235770d, "ip6_redirect" },
	{ 0x56e1768c, "ip6_update_pmtu" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x8e377f9e, "xfrm_state_lookup" },
	{ 0xf9778613, "__xfrm_policy_check" },
	{ 0xfe90659f, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc5850110, "printk" },
	{ 0x12f43a55, "icmpv6_send" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xee5d0fe, "__icmp_send" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x95952c47, "ip_route_output_key_hash" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x5df0f16e, "ip6_route_output_flags" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x66747671, "xfrm_lookup_with_ifid" },
	{ 0xef54d67f, "__xfrm_decode_session" },
	{ 0xa8b80792, "dst_release" },
	{ 0x31745b26, "__skb_ext_del" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3cafccfc, "xfrm6_protocol_deregister" },
	{ 0x9957e85d, "xfrm4_protocol_deregister" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4bfaea9a, "gro_cells_init" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xdd4dafc6, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DC3848B5063BABEA5D8CC68");
