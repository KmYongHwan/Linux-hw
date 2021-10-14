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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0x2f84aec9, "relay_file_operations" },
	{ 0x66e2bc4, "ath9k_hw_getchan_noise" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x7c441174, "ath9k_hw_setrxfilter" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x22e38fce, "relay_switch_subbuf" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x75be6dc2, "ath_printk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaf89ea55, "relay_close" },
	{ 0xc3cd859e, "ath9k_hw_gettsf64" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x47b7209a, "ath9k_hw_getrxfilter" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0xb18156be, "skb_pull" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x515f69f3, "relay_buf_full" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xe374d806, "ieee80211_get_hdrlen_from_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x25fd441, "relay_open" },
	{ 0xb0e602eb, "memmove" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1d7a11a5, "ath_hw_keyreset" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5ad6fc3f, "ath9k_hw_set_txpowerlimit" },
};

MODULE_INFO(depends, "ath9k_hw,cfg80211,ath");


MODULE_INFO(srcversion, "923CE24A2D339F2FC6DD39F");
