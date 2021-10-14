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
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x53b954a2, "up_read" },
	{ 0x70691c99, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0xa071f2c6, "single_release" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xc4142837, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xcec6343e, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb67fec0e, "uuid_parse" },
	{ 0x47fda759, "misc_register" },
	{ 0x89b46587, "__nvme_submit_sync_cmd" },
	{ 0xc5850110, "printk" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x88e96942, "device_create" },
	{ 0x4e3567f7, "match_int" },
	{ 0xce807a25, "up_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x69e683de, "uuid_gen" },
	{ 0xf720a60b, "module_put" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x6802e99e, "nvme_complete_rq" },
	{ 0x66414bc7, "__class_create" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "nvme-core");


MODULE_INFO(srcversion, "5C2FEA2F1194805C1271E7B");
