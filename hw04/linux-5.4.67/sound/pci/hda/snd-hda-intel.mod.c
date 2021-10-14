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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6138c58a, "snd_hdac_i915_set_bclk" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x38ce402b, "azx_interrupt" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xb56f876f, "param_get_int" },
	{ 0xd085ad0, "intel_nhlt_init" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xfa0deb9c, "snd_hda_lock_devices" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x5c297ff5, "snd_hdac_bus_alloc_stream_pages" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0xf45da7a, "snd_hdac_set_codec_wakeup" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xe27550b5, "azx_codec_configure" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6aa619a8, "pci_match_id" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x52333687, "snd_pci_quirk_lookup" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x495e1a7b, "param_set_int" },
	{ 0x6999f462, "snd_hdac_bus_parse_capabilities" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8093e213, "azx_stop_chip" },
	{ 0x7aa4c01, "snd_hdac_acomp_exit" },
	{ 0x153972ce, "snd_hda_set_power_save" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x89b00005, "vga_switcheroo_register_audio_client" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xea7abc28, "vga_switcheroo_unregister_client" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0xe6885839, "snd_hdac_display_power" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0x2f89cc53, "bpf_trace_run1" },
	{ 0xa6b8609b, "azx_init_chip" },
	{ 0xfbe8248, "snd_hda_load_patch" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x735604dd, "intel_nhlt_free" },
	{ 0x9b0f8243, "azx_free_streams" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0xc9bc90c3, "azx_bus_init" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe75e7429, "pci_get_domain_bus_and_slot" },
	{ 0xf95c2c93, "azx_get_pos_posbuf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xef03b1fc, "pci_pr3_present" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x551e6686, "snd_hda_unlock_devices" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x96e6727d, "param_ops_bint" },
	{ 0x65523885, "snd_card_new" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xe3ec4d4d, "snd_hdac_i915_init" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc3e0dc78, "pci_intx" },
	{ 0xaca75a9a, "azx_get_pos_lpib" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xaeade15, "snd_hdac_bus_exit" },
	{ 0x2793b04d, "snd_hdac_bus_free_stream_pages" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xe1fb0549, "azx_stop_all_streams" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xb989d810, "azx_init_streams" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5b28bd99, "azx_probe_codecs" },
	{ 0x8d3594bb, "intel_nhlt_get_dmic_geo" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0xf81d571c, "snd_hdac_bus_enter_link_reset" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf2146d17, "vga_switcheroo_get_client_state" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xede283d, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd-intel-nhlt,snd-pcm,snd");

MODULE_ALIAS("pci:v00008086d00001C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A171sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000038C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004DC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000043C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003198sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000811Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000080Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002284sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000284Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A3Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A6Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001002d0000437Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004383sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001457sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001487sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000157Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000157Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d000015B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000793Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007919sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000960Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000970Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009840sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA88sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAD8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAF0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005461sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00006549d00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00006549d00002200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00005011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00003010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015ADd00001977sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001D17d00003288sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ED51F5B43FFD0CBC0CE99F8");
