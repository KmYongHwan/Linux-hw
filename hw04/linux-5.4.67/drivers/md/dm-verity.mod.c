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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0x961c6b31, "dm_get_device" },
	{ 0x52817523, "key_type_user" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0x990c16b6, "dm_table_get_md" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x7b4081ac, "crypto_stats_ahash_update" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xef92d50d, "request_key_tag" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x308834f2, "dm_register_target" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3dc81c59, "dm_disk" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf587fb54, "crypto_ahash_final" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xfb578fc5, "memset" },
	{ 0xba312d7b, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe18157fb, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xac5b1c1, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0xc2e3aba0, "crypto_req_done" },
	{ 0x2d715234, "bio_endio" },
	{ 0x37480d59, "kobject_uevent_env" },
	{ 0x75e60613, "key_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x7d2fdb69, "dm_bio_from_per_bio_data" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0xacb5e2fd, "dm_put_device" },
	{ 0x96f0e7d9, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x74ca4843, "crypto_stats_get" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x58a76393, "verify_pkcs7_signature" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9bc39af7, "crypto_alloc_ahash" },
	{ 0x68609863, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-bufio");


MODULE_INFO(srcversion, "E89DEFC226AA6E03AD5E73F");
