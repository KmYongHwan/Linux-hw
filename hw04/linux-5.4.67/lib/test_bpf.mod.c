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
	{ 0x77179d2e, "param_ops_string" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xc634ca7, "kfree_skb_list" },
	{ 0x8b75640d, "skb_segment" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x63a2eb8b, "bpf_prog_destroy" },
	{ 0x1e68641b, "bpf_prog_free" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x7bb4cda4, "skb_add_rx_frag" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3785c132, "init_net" },
	{ 0xb0f7a25c, "bpf_prog_select_runtime" },
	{ 0xe59618ed, "bpf_prog_alloc" },
	{ 0x449c6056, "bpf_prog_create" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xeb233a45, "__kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6665F49BEF9599232C8C4E0");
